
#include "model.hpp"
#include <mariadb/conncpp.hpp>
#include "global.hpp"
#include <string>
#include <iostream>

float model::predict(float area)
{
    float b0, b1; 
    global::db_statement stmnt(SINGLETON.conn->createStatement()); 
    try {
         std::unique_ptr<sql::ResultSet>
         res(
         stmnt->executeQuery(
         // Select singular row with the highest R^2 
         // metric
         "SELECT * FROM model_parameters ORDER BY R2 DESC LIMIT 1;")
         );
         while(res->next())
         {
             b0 = std::stof(std::string(res->getString("B0")));
             b1 = std::stof(std::string(res->getString("B1")));
         }
   }
   catch (sql::SQLException& e) {
      std::cerr << "Error printing contacts: "
         << e.what() << std::endl;
   }
   return b0 + b1 * area; 
}

