#include<vector>
#include <stdexcept>
#include "metrics.hpp"
double mae(const std::vector<double>&y_pred,const std::vector<double>&y){
  if (y.size()!=y_pred.size()){
    throw std::invalid_argument("Vector sizes must match!");
  }
  else if (y.size()<=2){
    throw std::invalid_argument("Our method requires at least two data points to compute predictions using variance!");
  }
  else{
    double sum_error=0;
    size_t n=y.size();
    double sum=0;
    for (size_t i=0;i<n;i++){
      double difference=y_pred[i]-y[i];
      if (difference<0){
        difference=-difference;
      }
      sum+=difference;
    }
  return sum/n;}
}
