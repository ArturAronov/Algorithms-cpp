## 1720. Decode XORed Array   
**Source**: [leetCode](https://leetcode.com/problems/decode-xored-array/)   
**Difficulty**: Easy   
**Brief**:    
There is a **hidden** integer array ``arr`` that consists of ``n`` non-negative integers.   
It was encoded into another integer array ``encoded`` of length ``n - 1``, such that ``encoded[i] = arr[i] XOR arr[i + 1]``. For example, if ``arr = [1,0,2,1]``, then ``encoded = [1,2,3]``.   
You are given the ``encoded`` array. You are also given an integer first, that is the ``first`` element of ``arr``, i.e. ``arr[0]``.   
Return *the original array* ``arr``. It can be proved that the answer exists and is unique.   

### Example   
**Input**: ``encoded = [1,2,3], first = 1``   
**Output**: ``[1,0,2,1]``   
**Explanation**:   
If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]   

### Solution   
**Runtime**: ``28 ms``   
**Memory**: ``24.9 MB``   
```
class Solution {
public:
  vector<int> decode(vector<int>& encoded, int first) {
    //Since brief said that no new array should be created and array passed as an argument should be returned, one of the methods I used, albeit very unefficient, was the insert function.
    encoded.insert(encoded.begin(), first);
    for(int i=1; i<encoded.size(); i++){
      first^=encoded[i];
      encoded[i]=first;
    }
    
    return encoded;
  }
};
``` 

