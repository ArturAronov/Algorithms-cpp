## 1281. Subtract the Product and Sum of Digits of an Integer   
**Source**: [leetCode](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/)   
**Difficulty**: Easy   
**Brief**:    
Given an integer number ``n``, return the difference between the product of its digits and the sum of its digits.   


### Example   
**Input**: ``n=234``   
**Output**: ``15``   
**Explanation**:   
Product of digits = 2 * 3 * 4 = 24   
Sum of digits = 2 + 3 + 4 = 9   
Result = 24 - 9 = 15   

### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``5.9 MB``   
```
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
``` 

