//g++ -std=c++11 -o solution ./solution.cpp 

#include <iostream>
#include <vector>
#include <algorithm>      //std::transform

int reducer(int num);

int main(){
  std::vector<int> miku = {1,2,3,4,5,6,7,8,9};
  std::vector<int> chan;
  
  //This is required to avoid segmentation fault: [1] 35716 segmentation fault  ./solution
  chan.resize(miku.size());
  std::transform (miku.begin(), miku.end(), chan.begin(), reducer);
  
  for(auto i:chan){
    std::cout<<i<<' ';
  }

  return 0;
}


int reducer(int num){
  return num*=num;
}

