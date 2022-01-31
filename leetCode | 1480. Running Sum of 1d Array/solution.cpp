class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int length=nums.size();
      vector<int> result(length);
      result[0]=nums[0];
      
      for(int i=1; i<length; i++){
        result[i]=result[i-1]+nums[i];
      }
      
      return result;
    }
};
