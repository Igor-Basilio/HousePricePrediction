
#include <mariadb/conncpp.hpp>
#include <iostream>
#include <string>
#include <Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>
#include <valarray>

#include "global.hpp"
#include "helper.hpp"
#include "ETL.hpp"
#include "endpoints.pb.h"
#include "endpoints.grpc.pb.h"
#include "example2.grpc.pb.h"
#include "server.hpp"
#include "model.hpp"

using namespace std;

void printRequests(shared_ptr<sql::Statement> &stmnt)
{
    try {
        unique_ptr<sql::ResultSet> res(
        stmnt->executeQuery("SELECT * FROM model_parameters;") );
        while (res->next())
        {
            cout << "+---------------------------+" << '\n'; 
            cout << "| id | B0 | B1 | trained_at |" << '\n';
            cout << res->getString("id") << ' ';
            cout << res->getString("B0") << ' ';
            cout << res->getString("B1") << ' ';
            cout << res->getString("trained_at") << '\n';
            cout << "+---------------------------+" << endl; 
        }
    }catch(sql::SQLException& e) {
        cerr << e.what() << endl;
    }
}

using namespace sql;

void addModelParameters(shared_ptr<PreparedStatement> &stmnt,
        SQLString b0,
        SQLString b1,
        SQLString R2,
        SQLString P_ER_AVG,
        SQLString RSE,
        SQLString CORR,
        SQLString NUM_PREDICTORS) 
{
    try {
        stmnt->setString(1, b0);
        stmnt->setString(2, b1);
        stmnt->setString(3, R2);
        stmnt->setString(4, P_ER_AVG);
        stmnt->setString(5, RSE);
        stmnt->setString(6, CORR);
        stmnt->setString(7, NUM_PREDICTORS);

        stmnt->executeUpdate();
    }catch(global::sql_e &e)
    {
        cerr << e.what() << endl;
    }
}

void train_model(char *argv[])
{
    ETL etl(argv[1], argv[2], argv[3]);

    ETL_U::pandas dataset_cols = etl.readCSV(ETL_U::csv_opt::COLS);

    ETL_U::col p = dataset_cols[0];
    ETL_U::col a = dataset_cols[1];

    // Translate column values to Eigen with generic <T>
    auto prices = etl.CSVCtoEigen<double>(
            vector<string>(p.begin() + 1, p.end()) );

    auto area = etl.CSVCtoEigen<double>(
            vector<string>(a.begin() + 1, a.end()) );

    // Moving into the array world makes it so that 
    // broadcasting with scalars is possible
    // https://stackoverflow.com/questions/35688805/eigen-subtracting-a-scalar-from-a-vector

    // WARNING ! No train test split, later i'll do that.
    
     vector<Eigen::ArrayXf> pred = {area.array().cast<float>()};
     helper::linear_regression house_l(prices.array().cast<float>(), pred);

     // Lets compute b_0 and b_1 for a standard linear regression 
     // of a single predictor
     vector<float> c = house_l.get_coefficients();
    
     cout << c[1] << '\n' << c[0] << '\n'; 
     cout << house_l.get_r2() << "\n";
     cout << house_l.get_rse() << "\n";
     cout << house_l.get_perr_avg() << "\n";
     cout << helper::corr(prices.array().cast<float>(),
             area.array().cast<float>()) << "\n\n";

  /*  try {

        shared_ptr<PreparedStatement> stmnt (
        SINGLETON.conn->prepareStatement(
            "INSERT INTO model_parameters(B0, B1, R2, P_ER_AVG, RSE, CORR, " 
            "NUM_PREDICTORS) VALUES (?, ?, ?, ?, ?, ?, ?)"
            )
        );
        
        addModelParameters(stmnt, SQLString(to_string(b0)),
                SQLString(to_string(b1)), SQLString(to_string(r2)),
                SQLString(to_string(p_error_avg)),
                SQLString(to_string(rse)), SQLString(to_string(corr)),
                SQLString(to_string(1)));

    } catch(global::sql_e &e)
    {
        cerr << e.what() << endl;
        exit(EXIT_FAILURE);
    } */
}


int main(int argc, char*argv[])
{
    try {
        global::db_statement stmnt(SINGLETON.conn->createStatement());
        printRequests(stmnt);
    }catch(global::sql_e &e)
    {
        cerr << e.what() << endl;
        return EXIT_FAILURE;
    }

    train_model(argv);

    sky::ServerImpl server;
    server.run();

    SINGLETON.conn->close();
    return EXIT_SUCCESS;
}

