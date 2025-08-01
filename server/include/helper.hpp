#ifndef HELPER_H
#define HELPER_H

#include <utility>
#include <span>
#include <vector>
#include <Eigen/Dense>

using namespace std;

namespace helper
{
    template<int left = 0, int right = 0, typename T>
    constexpr auto slice(T&& container)
    {
        if constexpr (right > 0)
            return span(begin(std::forward<T>(container))+left,
                        begin(std::forward<T>(container))+right);
        else
            return span(begin(std::forward<T>(container))+left,
                        end(std::forward<T>(container))+right);
    }

    float corr(Eigen::ArrayXf y, Eigen::ArrayXf x);
    
    class linear_regression
    {
        public:
            linear_regression(Eigen::ArrayXf resp, vector<Eigen::ArrayXf> pred)
            : resp_(resp), predictors_(pred) 
            { train_(); }

            // Overloaded predict functions
            float predict(float predictor)
            {
                return b_[0] + b_[1] * predictor;
            }

            Eigen::ArrayXf predict(Eigen::ArrayXf predictors)
            {
                return b_[0] + b_[1] * predictors;
            }

            vector<Eigen::ArrayXf> predict(vector<Eigen::ArrayXf> predictors);
            //

            vector<float> get_coefficients() { return b_; }
            float get_r2() { return r2; }
            float get_rse() { return rse; }
            float get_perr_avg() { return p_error_avg; }
            float get_rss() { return rss; }
            float get_tss() { return tss; }

        private:
            vector<float> b_; 
            Eigen::ArrayXf resp_;
            vector<Eigen::ArrayXf> predictors_;
             
            float r2;
            float rse; 
            float p_error_avg;
            float rss;
            float tss;

            void train_()
            {
                
                // Only allow support for single predictor
                // linear regression for now.
                if ( predictors_.size() > 1 )
                     delete this; 

                auto num = 
                ((predictors_[0] - predictors_[0].mean()) 
                        * (resp_ - resp_.mean())).sum();

                auto den =
                    (square((predictors_[0] - predictors_[0].mean())))
                     .sum();

                auto b1 = num / den;
                auto b0 = resp_.mean() - b1 * predictors_[0].mean();
                    
                auto y_hat = b0 + b1 * predictors_[0].array();

                b_.push_back(b0);
                b_.push_back(b1);


                auto tss =
                    (square(resp_ - resp_.mean())).sum();

                this->tss = tss;

                auto rss =
                    (square(resp_ - y_hat)).sum();

                this->rss = rss;

                auto rse = sqrt(rss/(resp_.size() - 2));

                this->rse = rse;

                auto p_error_avg = (rse / resp_.mean());

                this->p_error_avg = p_error_avg;
                this->r2 = 1 - this->rss / this->tss;

            } 
    };

}

#endif // HELPER_H
