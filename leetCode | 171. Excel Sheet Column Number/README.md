## 171. Excel Sheet Column Number   
**Source**: [leetCode](https://leetcode.com/problems/excel-sheet-column-number/)   
**Difficulty**: Easy   
**Brief**:    
Given a string ``columnTitle`` that represents the column title as appear in an Excel sheet, return *its corresponding column number*.   

For example:   
```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
```   


### Example   
**Input**: ``columnTitle = "ZY"``   
**Output**: ``701``   

### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``5.9 MB``   
```
class Solution {
public:
  int titleToNumber(string columnTitle) {
    /*
    I started working from left to ring of the string by storing the values in int result.
    First the value of result gets multiplied by 26 (base of the alphabet length) + index of the letter
    */
    int result=0;
    for(int i:columnTitle){
      int digit=i-'A'+1;      
      result=result*26+digit;
    }
    return result;
  }
};
``` 

