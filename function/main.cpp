#include<iostream>
#include<vector>
#include "function.hpp"
int main (){
  std::vector<double>x_train={1,2,3,4};
  std::vector<double>x_test={5,6,7,8};
  std::vector<double>y_train={5,6,7,8}; 
  std::vetcor<doubel>y_test={9,10,11,12};
  std::vector<double>params=train(x_train,y_train);
  std::vector<double>y_preds=predict(x_test,y_test,params);
  vector_show(preds);
  return 0;
}
