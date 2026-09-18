#include <iostream>
#include <vector>
#include "vectorutils.hpp"
int main (){
  std::vector<double>x={1,2,3};
  std::vector<double>y={1,2,3};
  std::vector<double>x_plus_y=vector_add(x,y);
  double mean_x=vector_mean(x);
  double mean_y=vector_mean(y);
  std::cout<<"The mean of x is: "<<mean_x<<std::endl;
  std::cout<<"The mean of y is: "<<mean_y<<std::endl;
  return 0;
}
