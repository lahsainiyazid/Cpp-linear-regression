#include <iostream>
#include "vectorutils.hpp"
#include <vector>
#include<stdexcept>
//1-Add two vectors:
std::vector <double> vector_add (const std::vector<double>&x,const std::vector<double>&y){
  if(x.size()!=y.size()){
    throw std::invalid_argument("Vector sizes must match!");
  }
  if (x.empty()){
  throw std::invalid_argument ("Vectors must not be empty!");
}
size_t n=x.size();
std::vector <double>sum;
sum.reserve(x.size());
for (size_t i=0;i<n;i++){
 sum.push_back(x[i]+y[i]);
}
return sum;}
//2-Mean of a vector:
double vector_mean(const std::vector<double>&x){
  if (x.empty()){
    throw std::invalid_argument("Vector must not be empty!");
  }
  else{
    double sum=0;
    size_t n=x.size();
    for (size_t i=0;i<n;i++){
      sum+=x[i];
    }
  return sum/x.size();}
}
//3 Variance of a vector:
double vector_variance(const std::vector<double>&x){
 
if (x.size()<=1){throw std::invalid_argument("Variance requires at least two datapoints!");
  }
  else{
    size_t n=x.size();
    double mean=vector_mean(x);
    double sum=0;
    for(size_t i=0;i<n;i++){
      sum+=(x[i]-mean)*(x[i]-mean);
    }
  return sum/(n-1);}}
//4 Covariance of a vector:
 double vector_covariance(const std::vector<double>&x,const std::vector<double>&y){
   if (x.size()!=y.size()){
    throw std::invalid_argument("Vector sizes must match!");
   }
   else if (x.size()<2){
     throw std::invalid_argument("Covariance requires at least 2 data points!");
   }
   else{
     double sum=0;
     size_t n=x.size();
    double x_mean=vector_mean(x);
    double y_mean=vector_mean(y);
     for (size_t i=0;i<n;i++){
       sum+=(x[i]-x_mean)*(y[i]-y_mean);
     }
   return sum/(n-1);}
 }
//5 show vector:
void vector_show(const std::vector<double>&x){
  if (x.empty()){
    throw std::invalid_argument("Vectors must not be empty!");
  }
  std::cout<<"Vector:{";
  for (double val:x){
    std::cout<<val<<",";
  }
  std::cout<<"}";
}
