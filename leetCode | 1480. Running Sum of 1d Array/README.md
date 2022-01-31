## 1480. Running Sum of 1d Array

**Source**: [leetCode](https://leetcode.com/problems/running-sum-of-1d-array/)  
**Difficulty**: Easy   
**Brief**:     
Given an array ``nums``. We define a running sum of an array as ``runningSum[i] = sum(nums[0]…nums[i])``.    
Return the running sum of ``nums``.   

### Example:
**Input**: ``nums = [1,2,3,4]``   
**Output**: ``[1,3,6,10]``   
**Explanation**: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].    


### Solution:
**Runtime**: ``3ms``   
**Memory**: ``8.6MB``   
```
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
```
