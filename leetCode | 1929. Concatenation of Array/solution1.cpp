class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> ans=nums;
      int length=nums.size();
      
      for(int i=0; i<length; i++){
        ans.push_back(nums[i]);
      }
      
      return ans;
    }
};

//Runtime: 16ms
//Memory: 12.6MB
