#pragma once 
#include <vector>
#include "../vectorutils/vectorutils.hpp"
double slope(const std::vector<double>&x,const std::vector<double>&y);
double intercept(const std::vector<double>&x,const std::vector<double>&y,double m);
std::vector<double> predict(const std::vector<double>&x,double m,double b);
