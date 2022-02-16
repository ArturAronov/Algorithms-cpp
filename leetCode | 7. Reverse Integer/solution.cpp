class Solution {
public:
  int reverse(int x) {
    string str=to_string(x);
    std::reverse(str.begin(), str.end());
    long result=stol(str);
    
    if(result>INT_MAX){
      return 0;
    }else if(x<0){
      return result*-1;
    }else{
      return result;
    }
  }
};
