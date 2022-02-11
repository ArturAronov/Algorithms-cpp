## 217. Contains Duplicate   
**Source**: [leetCode](https://leetcode.com/problems/contains-duplicate/)   
**Difficulty**: Easy   
**Brief**:    
Given an integer array ``nums``, return ``true`` if any value appears **at least twice** in the array, and return ``false`` if every element is distinct.   


### Example   
**Input**: ``nums = [1,2,3,1]``   
**Output**: ``true``   

### Solution 1   
**Runtime**: ``183 ms``   
**Memory**: ``55.2 MB``   
```
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> numsSet(nums.begin(), nums.end());
    
    return numsSet.size()!=nums.size();
  }
};
```   

### Solution 2   
**Runtime**: ``162 ms``   
**Memory**: ``46.6 MB``   
```
class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++){
      if(nums[i-1]==nums[i]){
        return true;
      }
    }
    return false;
  }
};

```   

