## 1929. Concatenation of Array   

**Source**: [leetCode](https://leetcode.com/problems/concatenation-of-array/)  
**Difficulty**: Easy   
**Brief**:     
Given an integer array ``nums`` of length ``n``, you want to create an array ``ans`` of length ``2n`` where ``ans[i] == nums[i]`` and ``ans[i + n] == nums[i]`` for ``0 <= i < n`` **(0-indexed)**.   
Specifically, ``ans`` is the **concatenation** of two ``nums`` arrays.   
Return *the array* ``ans``.   

### Example:
**Input**: ``nums = [1,2,1]``   
**Output**: ``[1,2,1,1,2,1]``   
**Explanation**:   
The array ans is formed as follows:   
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]   
- ans = [1,2,1,1,2,1]   


### Solution 1:
**Runtime**: ``16ms``   
**Memory**: ``12.6MB``   
```
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
```

### Solution 2:
**Runtime**: ``33ms``   
**Memory**: ``12.8MB``   
```
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      nums.insert(nums.end(), nums.begin(), nums.end());
      return nums;
    }
};

```
 
### Solution 3:
**Runtime**: ``9ms``     
**Memory**: ``12.9MB``   
```
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      int length=nums.size();
      
      for(int i=0; i<length; i++){
        nums.push_back(nums[i]);
      }
      
      return nums;
    }
};

```

