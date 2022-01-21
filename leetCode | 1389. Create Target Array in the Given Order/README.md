## 1389. Create Target Array in the Given Order   
**Source**: [leetCode](https://leetcode.com/problems/create-target-array-in-the-given-order/)   
**Difficulty**: Easy   
**Brief**:    
Given two arrays of integers ``nums`` and ``index``. Your task is to create *target* array under the following rules:   

- Initially *target* array is empty.
- From left to right read nums[i] and index[i], insert at index ``index[i]`` the value ``nums[i]`` in target array.
- Repeat the previous step until there are no elements to read in ``nums`` and ``index``.

Return the *target* array.   
It is guaranteed that the insertion operations will be valid.   

### Example   
**Input**: ``[0,1,2,3,4], index = [0,1,2,2,1``   
**Output**: ``[0,4,1,3,2]``   
**Explanation**:   
=====================================   
|   nums   |   index  | target      |   
|===================================|   
|    0     |     0    |[0]          |   
|    1     |     1    |[0,1]        |   
|    2     |     2    |[0,1,2]      |     
|    3     |     2    |[0,1,3,2]    |    
|    4     |     1    |[0,4,1,3,2]  |    
=====================================    


### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``8.4 MB``   
```
class Solution {
public:
  vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> result;
    for (int i=0; i<nums.size(); i++){
      result.insert(result.begin()+index[i], nums[i]);
    }   
    return result;
  }
};
``` 

