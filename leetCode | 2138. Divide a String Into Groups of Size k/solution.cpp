class Solution {
public:
  vector<string> divideString(string s, int k, char fill) {
    int remainder=s.size()%k;
     
    if(remainder){
      remainder=k-remainder;
    }
    
    while(remainder){
      s+=fill;
      remainder--;
    }
    
    int length=s.size();
    vector<string> result;
    
    for(int i=0; i<length; i+=k){
      result.push_back(s.substr(i, k));
    }
    
    return result;
  }
};
