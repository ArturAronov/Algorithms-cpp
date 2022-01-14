## 2011. Final Value of Variable After Performing Operations

**Source**: [leetCode](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/)  
**Difficulty**: Easy   
**Brief**:     
There is a programming language with only **four** operations and **one** variable ``X``:   
- ``++X`` and ``X++`` **increments** the value of the variable **X** by **1**.   
- ``--X`` and ``X--`` **decrements** the value of the variable **X** by **1**.   
Initially, the value of ``X`` is ``0``.

Given an array of strings ``operations`` containing a list of operations, return the ***final*** *value of* ``X`` *after performing all the operations*.   

### Example:
**Input**: ``operations = ["--X","X++","X++"]``   
**Output**: ``1``   
**Explanation**:   
The operations are performed as follows:   
Initially, X = 0.   
--X: X is decremented by 1, X =  0 - 1 = -1.   
X++: X is incremented by 1, X = -1 + 1 =  0.   
X++: X is incremented by 1, X =  0 + 1 =  1.   


### Solution:
**Runtime**: ``6ms``   
**Memory**: ``14.1MB``   
```
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int result=0;
      int length=operations.size();
      for(int i=0; i<length; i++){
        if(operations[i][1]=='+'){
          result++;
        }else{
          result--;
        }
      }
      
      return result;
    }
};
