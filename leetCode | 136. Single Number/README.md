## 136. Single Number   
**Source**: [leetCode](https://leetcode.com/problems/single-number/)   
**Difficulty**: Easy   
**Brief**:    
Given a **non-empty** array of integers ``nums``, every element appears twice except for one. Find that single one.   
You must implement a solution with a linear runtime complexity and use only constant extra space.    

### Example   
**Input**: ``[4,1,2,1,2]``   
**Output**: ``4``   

### Solution - XOR   
**Runtime**: ``25 ms``   
**Memory**: ``17 MB``   
**Explanation:** XOR cancels out same numbers, ie 1^1=0, 2^2=0, 4^0=4    
```
class Solution {
public:
  int singleNumber(vector<int>& nums) {
    int result=0;
    
    for(int i=0; i<nums.size(); i++){
      result^=nums[i];
    }
    
    return result;
  }
};
``` 

