## 2185. Counting Words With a Given Prefix   
**Source**: [leetCode](https://leetcode.com/problems/counting-words-with-a-given-prefix/)   
**Difficulty**: Easy   
**Brief**:    
You are given an array of strings ``words`` and a string ``pref``.   
Return *the number of strings in* ``words`` *that contain* ``pref`` *as a* ***prefix***.   
A **prefix** of a string ``s`` is any leading contiguous substring of ``s``.   

### Example   
**Input**: ``words = ["pay","attention","practice","attend"], pref = "at"``   
**Output**: ``2``   
**Explanation**:   
The 2 strings that contain "at" as a prefix are: "**__at__**tention" and "**__at__**tend".

### Solution   
**Runtime**: ``12 ms``   
**Memory**: ``10.2 MB``   
```
class Solution {
public:
  int prefixCount(vector<string>& words, string pref) {
    int prefSize=pref.size();
    int count=0;
    
    for (int i=0; i<words.size(); i++){
      if(words[i].substr(0, prefSize)==pref){
        count++;
      }
    }
    
    return count;
  }
};
``` 

