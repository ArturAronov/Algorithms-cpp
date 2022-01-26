## 2138. Divide a String Into Groups of Size k   
**Source**: [leetCode](https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/)   
**Difficulty**: Easy   
**Brief**:    
A string ``s`` can be partitioned into groups of size ``k`` using the following procedure:   

- The first group consists of the first ``k`` characters of the string, the second group consists of the next ``k`` characters of the string, and so on. Each character can be a part of **exactly one** group.   
For the last group, if the string **does not** have ``k`` characters remaining, a character ``fill`` is used to complete the group.   

Note that the partition is done so that after removing the ``fill`` character from the last group (if it exists) and concatenating all the groups in order, the resultant string should be ``s``.   

Given the string ``s``, the size of each group ``k`` and the character ``fill``, return *a string array denoting the* ***composition of every group*** ``s`` *has been divided into, using the above procedure*.


### Example   
**Input**: ``s = "abcdefghij", k = 3, fill = "x"``   
**Output**: ``["abc","def","ghi","jxx"]``   
**Explanation**:   
The first 3 characters "abc" form the first group.   
The next 3 characters "def" form the second group.   
The last 3 characters "ghi" form the third group.   
For the last group, we can only use the character 'j' from the string. To complete this group, we add 'x' twice.   
Thus, the 4 groups formed are "abc", "def", "ghi", and "jxx".   

### Solution   
**Runtime**: ``3 ms``   
**Memory**: ``6.7 MB``   
```
class Solution {
public:
  vector<string> divideString(string s, int k, char fill) {
    
    //determine if there's a reminder with modulo operator, by dividing string s size with int k.
    int remainder=s.size()%k;
    
    //if there's a reminder value, then reminder gets updated with the value of int k minus int reminder.
    if(remainder){
      remainder=k-remainder;
    }
    
    //then until the remainder is larger than 0, the value stored in char fill gets adjusted to string s.
    while(remainder){
      s+=fill;
      remainder--;
    }
    
    int length=s.size();
    vector<string> result;
    
    //as for final step, a for loop will iterate over the length of string s and increments by value of int k. Inside the loop a substring of string s gets pushed back into vector result.
    for(int i=0; i<length; i+=k){
      result.push_back(s.substr(i, k));
    }
    
    return result;
  }
};
``` 

