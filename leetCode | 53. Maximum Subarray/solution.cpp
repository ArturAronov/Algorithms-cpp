class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int result=nums[0];
    int sum=nums[0];
    int length=nums.size();    
    
    for (int i=1; i<length; i++) {
      sum=max(sum+nums[i], nums[i]);
      result=max(sum, result);
    }
    
    
    return result;
  }
};
