#include<vector>
#include<stdexcept>
#include "function.hpp"
/*We use this formula:
 m=cov(x,y)/var(x);
 */ 
double slope(const std::vector<double>&x,const std::vector<double>&y){
  double var_x=vector_variance(x);
  if(var_x==0){
    throw std::invalid_argument("The variance of X input features must not be 0!");
  }
  else{
    double cov_x_y=vector_covariance(x,y);
    return cov_x_y/var_x;
  }
  }
/*For the intecepr we use this function:
 b=y_mean-m*x_mean;
 */
double intercept(const std::vector<double>&x,const std::vector<double>&y,double m){
  double y_mean=vector_mean(y);
   double x_mean=vector_mean(x);
    double b=y_mean-m*x_mean;
    return b;}
 std::vector<double> train (const std::vector<double>&x,const std::vector<double>&y){
   double m=slope(x,y);
   double b=intercept(x,y,m);
   std::vector<double>params={m,b};
 return params;}
std::vector<double> predict(const std::vector<double>&x_test,const std::vector<double>&x_train,const std::vector<double>&y){
  if(x_train.empty()){
    throw std::invalid_argument("X_train vector must not be empty!");
  }
  std::vector<double>regression_params=train(x_train,y);
  double m=regression_params[0];
  double b=regression_params[1];
  size_t n=x_test.size();
  std::vector<double>y_preds;
  for (size_t i=0;i<n;i++){
    y.push_back(m*y[i]+b);
  }
return y_preds; }

