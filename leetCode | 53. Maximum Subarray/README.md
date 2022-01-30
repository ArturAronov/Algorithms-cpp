## 53. Maximum Subarray   
**Source**: [leetCode](https://leetcode.com/problems/maximum-subarray/)   
**Difficulty**: Easy   
**Brief**:    
Given an integer array ``nums``, find the contiguous subarray (containing at least one number) which has the largest sum and return *its sum*.

A **subarray** is a **contiguous** part of an array.

### Example   
**Input**: ``[-2,1,-3,4,-1,2,1,-5,4]``   
**Output**: ``6``   
**Explanation**:   
[4,-1,2,1] has the largest sum = 6.

### Solution   
**Runtime**: ``169 ms``   
**Memory**: ``67.7 MB``   
```
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
``` 

