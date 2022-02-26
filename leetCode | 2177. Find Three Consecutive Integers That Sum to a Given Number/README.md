## 2177. Find Three Consecutive Integers That Sum to a Given Number   
**Source**: [leetCode](https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/)   
**Difficulty**: Medium   
**Brief**:    
Given an integer ``num``, return *three consecutive integers (as a sorted array) that* **sum** *to* ``num``. If ``num`` cannot be expressed as the sum of three consecutive integers, return *an* ***empty*** *array*.

### Example   
**Input**: ``num = 33``   
**Output**: ``[10,11,12]``   
**Explanation**:  
33 can be expressed as 10 + 11 + 12 = 33.   
10, 11, 12 are 3 consecutive integers, so we return [10, 11, 12].   

### Solution 1   
**Runtime**: ``4 ms``   
**Memory**: ``6 MB``   
```
class Solution {
public:
  vector<long long> sumOfThree(long long num) {
    long long divider=num/3;
    long long testCase=0;
    vector<long long> arr;
    
    arr.push_back(--divider);
    arr.push_back(++divider);
    arr.push_back(++divider);
    
    for(int i=0; i<arr.size(); i++){
      testCase+=arr[i];
    }
    
    if(testCase==num){
      return arr;
    }else{
      return {};
    }
  }
};
```   

### Solution 2   
**Runtime**: ``0 ms``   
**Memory**: ``6.2 MB``   
```
class Solution {
public:
  vector<long long> sumOfThree(long long num) {
    vector<long long> arr;
 
    if(num%3==0){
      arr.push_back(num/3-1);
      arr.push_back(num/3);
      arr.push_back(num/3+1);
    }
    
    return arr;
  }
};
```   

