class Solution {
public:
  vector<long long> sumOfThree(long long num) {
    vector<long long> arr;
 
    if(num%3==0){
      arr.push_back(num/3-1);
      arr.push_back(num/3);
      arr.push_back(num/3+1);
    }
    
    return arr;
  }
};
