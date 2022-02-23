## 169. Majority Element   
**Source**: [leetCode](https://leetcode.com/problems/majority-element/)   
**Difficulty**: Easy   
**Brief**:    
Given an array ``nums`` of size ``n``, return *the majority element*.   
The majority element is the element that appears more than ``⌊n / 2⌋`` times. You may assume that the majority element always exists in the array.   


### Example   
**Input**: ``nums = [2,2,1,1,1,2,2]``   
**Output**: ``2``   

### Solution - nth_element   
**Runtime**: ``26 ms``   
**Memory**: ``19.6 MB``   
```
class Solution {
public:
  int majorityElement(vector<int>& nums) {
    //Will use nth_element method here, that takes the range of entire nums vector, however it iterates over only half a length of the vector (nums.begin()+nums.size()/2). Since we are given that the amount of majority numbers is larger than size of the vector, we can return the middle-most value of the nums vector.
    nth_element(nums.begin(), nums.begin()+nums.size()/2 ,nums.end());

    return nums[nums.size()/2];
  }
};
``` 

