#include<iostream>
#include<vector>
#include "function.hpp"
int main (){
  std::vector<double>x={1,2,3,4};
  std::vector<double>y={5,6,7,8};
 double m=slope(x,y);
 double b=intercept(x,y,m);
  std::cout<<"m="<<slope<<std::endl;
  std::cout<<"b="<<intercept<<std::endl;
  std::vector<double>preds=predict(x,m,b);
  vector_show(preds);
  return 0;
}
