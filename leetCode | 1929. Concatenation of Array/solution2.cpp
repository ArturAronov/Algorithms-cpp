class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      nums.insert(nums.end(), nums.begin(), nums.end());
      return nums;
    }
};

//Runtime: 31ms
//Memory: 12.8MB
