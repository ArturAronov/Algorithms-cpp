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
