
#include "helper.hpp"

float helper::corr(Eigen::ArrayXf y, Eigen::ArrayXf x)
{
    auto corr =
        ((x - x.mean()) * (y - y.mean())).sum();

    corr = corr /
        (sqrt((square(x - x.mean())).sum())
         * sqrt((square(y - y.mean())).sum()));
    
    return corr;
}

