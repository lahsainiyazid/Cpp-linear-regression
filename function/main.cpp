#include<iostream>
#include<vector>
#include "function.hpp"
int main (){
  // We try here to find here y=x+4;
  std::vector<double>x_train={1,2,3,4};
  std::vector<double>x_test={5,6,7,8};
  std::vector<double>y_train={5,6,7,8}; 
  std::vector<double>y_test={9,10,11,12};
  std::vector<double>params=train(x_train,y_train);
  std::vector<double>y_preds=predict(x_test,params);
  std::cout<<"The slope m="<<params[0]<<std::endl;
  std::cout<<"The intercept b="<<params[1]<<std::endl;
  std::cout<<"Predictions:"<<std::endl;
  vector_show(y_preds);
  std::cout<<""<<std::endl;
  std::cout<<"True labels:"<<std::endl;
  vector_show(y_test);
  return 0;
}
