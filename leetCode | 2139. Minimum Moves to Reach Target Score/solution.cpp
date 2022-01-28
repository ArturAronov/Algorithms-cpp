class Solution {
public:
  int minMoves(int target, int maxDoubles) {
    int count=0;
    
    while(maxDoubles && target){
      if(target%2){
        target--;
      }else{
        maxDoubles--;
        target=target/2;
      }
      count++;
    }
    
    return count+target-1;
  }
};
