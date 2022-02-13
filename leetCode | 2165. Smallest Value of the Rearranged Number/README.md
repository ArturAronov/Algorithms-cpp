## 2165. Smallest Value of the Rearranged Number   
**Source**: [leetCode](https://leetcode.com/problems/smallest-value-of-the-rearranged-number/)   
**Difficulty**: Medium   
**Brief**:    
You are given an integer ``num``. **Rearrange** the digits of ``num`` such that its value is **minimized** and it does not contain **any** leading zeros.   
Return *the rearranged number with minimal value*.   
Note that the sign of the number does not change after rearranging the digits.    


### Example 1   
**Input**: ``310``   
**Output**: ``103``   
**Explanation**:   
The possible arrangements for the digits of 310 are 013, 031, 103, 130, 301, 310.    
The arrangement with the smallest value that does not contain any leading zeros is 103.   


### Example 2   
**Input**: ``-7605``   
**Output**: ``-7650``   
**Explanation**:  
Some possible arrangements for the digits of -7605 are -7650, -6705, -5076, -0567.   
The arrangement with the smallest value that does not contain any leading zeros is -7650.   


### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``6 MB``   
```
class Solution {
public:
  long long smallestNumber(long long num) {
    string strNum=to_string(num);
    
    if(num>0){
      sort(strNum.begin(), strNum.end());
      swap(strNum[0], strNum[strNum.find_first_not_of('0')]);
    }else{
      sort(strNum.begin(), strNum.end(), greater<int>());
    }
    
    long long result=stoll(strNum);
    
    if(num<0){
      return result*-1;
    }else{
      return result;
    }
  }
};
``` 

