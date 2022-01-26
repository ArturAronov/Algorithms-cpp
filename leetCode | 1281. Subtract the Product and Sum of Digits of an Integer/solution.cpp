class Solution {
public:
    int subtractProductAndSum(int n) {
      int product=1;
      int sum=0;
      
      while(n){
        int current=n%10;
        n/=10;
        
        product*=current;
        sum+=current;
      }
      
      return product-sum;
    }
};
