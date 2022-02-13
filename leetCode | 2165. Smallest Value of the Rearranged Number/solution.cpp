class Solution {
public:
  long long smallestNumber(long long num) {
    string strNum=to_string(num);
    
    if(num>0){
      sort(strNum.begin(), strNum.end());
      swap(strNum[0], strNum[strNum.find_first_not_of('0')]);
    }else{
      sort(strNum.begin(), strNum.end(), greater<int>());
    }
    
    long long result=stoll(strNum);
    
    if(num<0){
      return result*-1;
    }else{
      return result;
    }
  }
};
