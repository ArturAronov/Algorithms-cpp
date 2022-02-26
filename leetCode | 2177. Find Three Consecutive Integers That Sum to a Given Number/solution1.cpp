class Solution {
public:
  vector<long long> sumOfThree(long long num) {
    long long divider=num/3;
    long long testCase=0;
    vector<long long> arr;
    
    arr.push_back(--divider);
    arr.push_back(++divider);
    arr.push_back(++divider);
    
    for(int i=0; i<arr.size(); i++){
      testCase+=arr[i];
    }
    
    if(testCase==num){
      return arr;
    }else{
      return {};
    }
  }
};
