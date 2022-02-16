## 7. Reverse Integer   
**Source**: [leetCode](https://leetcode.com/problems/reverse-integer/)   
**Difficulty**: Medium   
**Brief**:    
Given a signed 32-bit integer ``x``, return ``x`` with its digits reversed. If reversing ``x`` causes the value to go outside the signed 32-bit integer range ``[-231, 231 - 1]``, then return ``0``.   
**Assume the environment does not allow you to store 64-bit integers (signed or unsigned).**   


### Example 1   
**Input**: ``123``   
**Output**: ``321``   


### Example 2   
**Input**: ``-123``   
**Output**: ``-321``   


### Example 3   
**Input**: ``120``   
**Output**: ``21``   


### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``5.9 MB``   
```
class Solution {
public:
  int reverse(int x) {
    string str=to_string(x);
    std::reverse(str.begin(), str.end());
    //long is used here since when integer gets reversed, the value will overflow if it's too large. long is 32 bit integer (vs int 16 bit), meaning there is no restrictions on using it, as brief points only that we are not allowed to store 64 bits and above (hence no long long)
    long result=stol(str);
    
    if(result>INT_MAX){
      //if result is bigger than maximum value of int, then 0 gets returned
      return 0;
    }else if(x<0){
      return result*-1;
    }else{
      return result;
    }
  }
};
``` 

