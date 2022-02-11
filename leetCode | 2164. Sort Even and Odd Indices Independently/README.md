## 2164. Sort Even and Odd Indices Independently   
**Source**: [leetCode](https://leetcode.com/problems/sort-even-and-odd-indices-independently/)   
**Difficulty**: Easy   
**Brief**:    
You are given a **0-indexed** integer array ``nums``. Rearrange the values of ``nums`` according to the following rules:   

1. Sort the values at **odd indices** of ``nums`` in **non-increasing** order.   
  - For example, if ``nums = [4,1,2,3]`` before this step, it becomes ``[4,3,2,1]`` after. The values at odd indices ``1`` and ``3`` are sorted in non-increasing order.   
2. Sort the values at even indices of nums in non-decreasing order.
  - For example, if ``nums = [4,1,2,3]`` before this step, it becomes ``[2,1,4,3]`` after. The values at even indices ``0`` and ``2`` are sorted in non-decreasing order.   

Return *the array formed after rearranging the values of* ``nums``.


### Example   
**Input**: ``nums = [4,1,2,3]``   
**Output**: ``[2,3,4,1]``   
**Explanation**:   
First, we sort the values present at odd indices (1 and 3) in non-increasing order.   
So, nums changes from [4,1,2,3] to [4,3,2,1].   
Next, we sort the values present at even indices (0 and 2) in non-decreasing order.   
So, nums changes from [4,1,2,3] to [2,3,4,1].   
Thus, the array formed after rearranging the values is [2,3,4,1].   


### Solution   
**Runtime**: ``4 ms``   
**Memory**: ``12.2 MB``   
```
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
``` 

