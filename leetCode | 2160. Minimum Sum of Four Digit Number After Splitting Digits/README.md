## 2160. Minimum Sum of Four Digit Number After Splitting Digits   
**Source**: [leetCode](https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/)   
**Difficulty**: Easy   
**Brief**:    
You are given a **positive** integer ``num`` consisting of exactly four digits. Split ``num`` into two new integers ``new1`` and ``new2`` by using the **digits** found in ``num``. **Leading zeros** are allowed in ``new1`` and ``new2``, and **all** the digits found in ``num`` must be used.   
- For example, given ``num = 2932``, you have the following digits: two ``2``'s, one ``9`` and one ``3``. Some of the possible pairs ``[new1, new2]`` are ``[22, 93]``, ``[23, 92]``, ``[223, 9]`` and ``[2, 329]``.   

Return *the* ***minimum*** *possible sum of* ``new1`` *and* ``new2``.   


### Example   
**Input**: ``num = 2932``   
**Output**: ``52``   
**Explanation**:   
Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.   
The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.   


### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``6.1 MB``   
```
class Solution {
public:
  int minimumSum(int num) {
    
    //initialise new vector where individual integers get stored
    vector<int> nums;
    
    while(num){
      //split the num into individual integers and push them into the nums vector
      nums.push_back(num%10);
      num=num/10;
    }
    
    //sort nums vector into ascending order
    sort(nums.begin(), nums.end());
    
    //create two new integers by taking first two lower integers, multipy them by 10 and then add two largerst lowest integer to it
    int new1=(nums[0]*10)+nums[2];
    int new2=(nums[1]*10)+nums[3];
    
    return new1+new2;
  }
};
``` 

