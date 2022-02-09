class Solution {
public:
  vector<int> decode(vector<int>& encoded, int first) {
    encoded.insert(encoded.begin(), first);
    for(int i=1; i<encoded.size(); i++){
      first^=encoded[i];
      encoded[i]=first;
    }
    
    return encoded;
  }
};
