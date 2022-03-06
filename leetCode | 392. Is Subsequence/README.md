## 392. Is Subsequence   
**Source**: [leetCode](https://leetcode.com/problems/is-subsequence/)   
**Difficulty**: Easy   
**Brief**:    
Given two strings ``s`` and ``t``, return ``true`` *if* ``s`` *is a* ***subsequence*** *of* ``t``*, or* ``false`` *otherwise*.   

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., ``"ace"`` is a subsequence of ``"abcde"`` while ``"aec"`` is not).   

### Example 1   
**Input**: ``s = "abc", t = "ahbgdc"``   
**Output**: ``true``   


### Example 2   
**Input**: ``s = "axc", t = "ahbgdc"``   
**Output**: ``false``   


### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``6.4 ms``   
```
class Solution {
public:
  bool isSubsequence(string s, string t) {
    int sIndex=0;
    for(int i=0; i<t.size(); i++){
      if(s[sIndex]==t[i]){
        sIndex++;
      }
    }

    return s.size()==sIndex;
  }
};
``` 

