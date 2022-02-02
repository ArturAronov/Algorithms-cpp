## 605. Can Place Flowers   
**Source**: [leetCode](https://leetcode.com/problems/can-place-flowers/)   
**Difficulty**: Easy   
**Brief**:    
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in **adjacent** plots.   

Given an integer array ``flowerbed`` containing ``0``'s and ``1``'s, where ``0`` means empty and ``1`` means not empty, and an integer ``n``, return *if* ``n`` new flowers can be planted in the ``flowerbed`` without violating the no-adjacent-flowers rule.

### Example   
**Input**: ``flowerbed = [1,0,0,0,1], n = 1``   
**Output**: ``true``   


### Solution   
**Runtime**: ``34 ms``   
**Memory**: ``20.3 MB``   
```
class Solution {
public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int length=flowerbed.size();
      
    for(int i=0; i<length; i++){
      if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==length-1 || flowerbed[i+1]==0)){
        n--;
        flowerbed[i]=1;
      }
    }
    return n<=0;
  }
};
``` 

