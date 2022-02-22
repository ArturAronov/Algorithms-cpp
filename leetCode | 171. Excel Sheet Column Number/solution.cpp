class Solution {
public:
  int titleToNumber(string columnTitle) {
    int result=0;
    for(int i:columnTitle){
      int digit=i-'A'+1;      
      result=result*26+digit;
    }
    return result;
  }
};


