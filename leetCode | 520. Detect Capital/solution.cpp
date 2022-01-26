class Solution {
public:
  bool detectCapitalUse(string word) {
    bool capital=true;
    int length=word.size();
    
    for(int i=0; i<length; i++){
      char upper=toupper(word[i]);
        
      if(i>1 && capital && word[i]!=upper){
        return false;
      }else if(word[i]!=upper){
        capital=false;
      }else if(!capital && word[i]==upper){
        return false;
      }
    }
    
    return true;
  }
};
