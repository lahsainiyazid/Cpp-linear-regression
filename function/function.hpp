#pragma once 
#include <vector>
#include "../vectorutils/vectorutils.hpp"
double slope(const std::vector<double>&x,const std::vector<double>&y);
double intercept(const std::vector<double>&x,const std::vector<double>&y,double m);
std::vector<double>train(const std::vector<double>&x_train,const std::vector<double>&y_train);
std::vector<double> predict(const std::vector<double>&x_test,const std::vector<double>&params);
