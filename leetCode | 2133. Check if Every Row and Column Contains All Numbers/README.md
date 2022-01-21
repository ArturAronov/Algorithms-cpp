## 2133. Check if Every Row and Column Contains All Numbers   
**Source**: [leetCode](https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/)   
**Difficulty**: Easy   
**Brief**:    
An ``n x n`` matrix is **valid** if every row and every column contains **all** the integers from ``1`` to ``n`` (inclusive).   
Given an ``n x n`` integer matrix ``matrix``, return ``true`` *if the matrix is* ***valid***. Otherwise, return ``false.``



### Example   
**Input**: ``matrix = [[1,2,3],[3,1,2],[2,3,1]]``   
**Output**: ``true``   
**Explanation**:  
In this case, n = 3, and every row and column contains the numbers 1, 2, and 3.   
Hence, we return true.


### Solution   
**Runtime**: ``514 ms``   
**Memory**: ``101.5 MB``   
```
class Solution {
public:
  bool checkValid(vector<vector<int>>& matrix) {
    int matrix_length=matrix.size();
    
    for(int i=0; i<matrix_length; i++){
      vector<int> vertical_vec;
      for(int j=0; j<matrix_length; j++){
        vertical_vec.push_back(matrix[j][matrix_length-1-i]);
      }
      
      set<int> vertical_set (vertical_vec.begin(), vertical_vec.end());
      set<int> horizontal_set (matrix[i].begin(), matrix[i].end());
     
      if(horizontal_set.size()<matrix_length){
        return false;
      }
      
      if(vertical_set.size()<matrix_length){
        return false;
      }    
    }
  
    return true;
  }
}
``` 

