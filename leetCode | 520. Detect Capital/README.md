## 520. Detect Capital   
**Source**: [leetCode](https://leetcode.com/problems/detect-capital/)   
**Difficulty**: Easy   
**Brief**:    
We define the usage of capitals in a word to be right when one of the following cases holds:   
- All letters in this word are capitals, like "USA".
- All letters in this word are not capitals, like "leetcode".
- Only the first letter in this word is capital, like "Google".   
Given a string ``word``, return ``true`` if the usage of capitals in it is right.   

### Example   
**Input**: ``London``   
**Output**: ``true``    

### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``5.9 MB``   
```
class Solution {
public:
  bool detectCapitalUse(string word) {
    bool capital=true;
    int length=word.size();
    
    for(int i=0; i<length; i++){
      char upper=toupper(word[i]);
        
      if(i>1 && capital && word[i]!=upper){
        //if word=LOndon
        return false;
      }else if(word[i]!=upper){
        capital=false;
      }else if(!capital && word[i]==upper){
        //if word=loNdon
        return false;
      }
    }
    
    return true;
  }
};
``` 

