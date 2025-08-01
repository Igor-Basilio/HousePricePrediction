#ifndef GLOBAL_H
#define GLOBAL_H

#include <mariadb/conncpp.hpp>
using namespace std;

namespace global 
{

    using mariadb_connection = unique_ptr<sql::Connection>;
    using db_statement = shared_ptr<sql::Statement>;
    using sql_e = sql::SQLException;

    class S
    {
        public:
            static S& getInstance()
            {
                static S    instance; // Guaranteed to be destroyed.
                                      // Instantiated on first use.
                return instance;
            }
        private:
            S() 
            : driver(sql::mariadb::get_driver_instance()),
              properties(
                {{"hostName", "127.0.0.1/house_prediction"},
                {"userName", "Igor"},
                {"password", "1234"}}),
              conn(driver->connect(properties)) {}
            // Constructor? (the {} brackets) are needed here.
            

            // C++ 11
            // =======
            // We can use the better technique of deleting the methods
            // we don't want.
        public:
            S(S const&)               = delete;
            void operator=(S const&)  = delete;

            // Note: Scott Meyers mentions in his Effective Modern
            //       C++ book, that deleted functions should generally
            //       be public as it results in better error messages
            //       due to the compilers behavior to check accessibility
            //       before deleted status
            
            sql::Driver* driver;
            sql::Properties properties;
            mariadb_connection conn;
    };
        
    #define SINGLETON global::S::getInstance()

}

#endif // GLOBAL_H
