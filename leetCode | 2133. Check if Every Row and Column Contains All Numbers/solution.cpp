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
