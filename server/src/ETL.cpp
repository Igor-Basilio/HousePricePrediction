
#include "ETL.hpp"
#include <vector>
#include <stdlib.h>
#include <cmath>
#include <boost/algorithm/string.hpp>

ETL_U::pandas ETL::readCSV(){
    ifstream file(dataset);
    ETL_U::pandas dataString;
    string line = "";
    while(getline(file, line)){
        vector<string> vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
        dataString.push_back(vec);
    }
    file.close();
    return dataString;
}

ETL_U::pandas ETL::readCSV(ETL_U::csv_opt opt){

    if(opt==ETL_U::csv_opt::ROWS)
        return ETL::readCSV();
    else if(opt==ETL_U::csv_opt::COLS)
        ;
    else 
        throw invalid_argument("Invalid argument opt");

    ifstream file(dataset);
    string line = "";
    size_t i = 0;

    getline(file, line);
    vector<string> vec;
    boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
    size_t n_cols = vec.size();
    ETL_U::pandas dataString(n_cols);

    for( size_t i=0; i < n_cols; i++ ) 
        dataString[i].push_back(vec[i]); 

    while(getline(file, line)){
        boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
        for( size_t i=0; i < n_cols; i++ ) 
            dataString[i].push_back(vec[i]); 
    }

    file.close();
    return dataString;
}
/* 
 * This calculates the number of rows and columns
 * based on vector size() and first item vector[0].size()
 * respectively.
 *
 * DO NOT USE !
 * NOT FINISHED WIP
 *
*/
auto ETL::CSVtoEigen(ETL_U::pandas csv) -> Eigen::MatrixXd
{
    auto cols = csv.size();
    auto rows = cols;
    if ( cols >= 1 ) 
    {
        rows = csv[0].size();
    }else { return Eigen::MatrixXd(); }

    Eigen::MatrixXd mat(cols, rows);
    return mat;
}

