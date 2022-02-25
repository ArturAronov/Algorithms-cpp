//g++ -std=c++11 -o script ./script.cpp 

#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int search);
void print(std::vector<int> const &arr);

int main(){
  std::cout<<binarySearch({1,22,300,420,500,666,777,888, 911}, 420)<<std::endl;
}

void print(std::vector<int> const &arr){
  std::cout<<"Input vector: {";
  int j=0;
  for (auto i=arr.begin(); i!=arr.end(); i++) {
    bool last=(j==arr.size()-1);
    std::cout<<*i<<(last?"":", ");
    j++;
  };
  std::cout<<"}"<<std::endl;
}

int binarySearch(std::vector<int> arr, int search){
  int lower=0;
  int upper=arr.size()-1;
  
  while(lower<=upper){
    int mid=(lower+upper)/2;
    int midVal=arr[mid];

    if(search==midVal){
      print(arr);
      std::cout<<"Search value: "<<search<<
      std::endl<<"Located in index: ";
      return mid;
    }else if(search<midVal){
      upper=mid-1;      
    }else if(search>midVal){
      lower=mid+1;
    }
  };
  
  std::cout<<"Number "<<search<<" is not found"<<std::endl;
  return -1;
};
