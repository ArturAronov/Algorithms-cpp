class Solution {
public:
  int findFinalValue(vector<int>& nums, int original) {      
    for(int i:nums){
      if(count(nums.begin(), nums.end(), original)){
        original*=2;
      }
    }
    
    return original;
  }
};
