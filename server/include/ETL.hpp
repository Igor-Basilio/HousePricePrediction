#ifndef ETL_H
#define ETL_H

#include <iostream>
#include <fstream>
#include <Eigen/Dense>
#include <stdexcept>

using namespace std;

namespace ETL_U {
    using pandas = vector<vector<string>>;
    using col    = vector<string>;
    using row    = col;
    enum class csv_opt : char { COLS, ROWS, NO_HEADER };
}

class ETL
{
    std::string dataset;
    std::string delimiter;

public:
    ETL(std::string data, std::string separator, bool head)
    : dataset(data), delimiter(separator) {}

    ETL_U::pandas readCSV();
    ETL_U::pandas readCSV(ETL_U::csv_opt opt);

    Eigen::MatrixXd CSVtoEigen(ETL_U::pandas csv);

    template<typename Type>
    auto CSVCtoEigen(auto v) -> Eigen::VectorX<Type>;
};

/*
 * This has to be here so the linker can know 
 * the type instantiation at compile time
 * the other solution would be to explicitly 
 * instantiate the template for a type T.
 * https://stackoverflow.com/questions/1639797/
 * template-issue-causes-linker-error-c
 *
*/ 
template<typename Type>
auto ETL::CSVCtoEigen(auto v) -> Eigen::VectorX<Type>
{
    Eigen::VectorX<Type> ev(v.size());
    for (size_t i = 0; i < v.size(); ++i) {
        ev[i] = static_cast<Type>(std::stod(v[i]));
    }
    return ev;
}

#endif // ETL_H
