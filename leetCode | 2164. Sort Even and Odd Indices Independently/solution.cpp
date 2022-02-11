class Solution {
public:
  vector<int> sortEvenOdd(vector<int>& nums) {
    vector<int> odds;
    vector<int> evens;
    vector<int> result(nums.size());
    
    for(int i=0; i<nums.size(); i++){
      if(i%2==0){
        evens.push_back(nums[i]);
      }else{
        odds.push_back(nums[i]);
      }
    }
    
    sort(odds.begin(), odds.end(), greater<int>());
    sort(evens.begin(), evens.end());
    
    for(int i=0, j=0; j<result.size(); i++, j+=2){
      result[j]=evens[i];
    }
    
    for(int i=0, j=1; j<result.size() && i<odds.size(); i++, j+=2){
      result[j]=odds[i];
    }
    
    return result;
  }
};
