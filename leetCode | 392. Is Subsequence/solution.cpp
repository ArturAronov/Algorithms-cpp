class Solution {
public:
  bool isSubsequence(string s, string t) {
    int sIndex=0;
    for(int i=0; i<t.size(); i++){
      if(s[sIndex]==t[i]){
        sIndex++;
      }
    }

    return s.size()==sIndex;
  }
};
