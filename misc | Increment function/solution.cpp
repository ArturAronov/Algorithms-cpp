//g++ -std=c++11 -o solution ./solution.cpp 

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>    //std::transform
#include <functional>   //std::plus

int operator(int num);

int main(){
  std::vector<int> foo = {1,2,3,4,5,6,7,8,9};
  std::vector<int> bar;
  
  bar.resize(foo.size());
  std::transform (foo.begin(), foo.end(), bar.begin(), operator);
  for(auto i:bar){
    std::cout<<i<<' ';
  }

  return 0;
}


int operator(int num){
  return num*=num;
}

