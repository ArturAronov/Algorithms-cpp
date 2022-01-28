## 2139. Minimum Moves to Reach Target Score   
**Source**: [leetCode](https://leetcode.com/problems/minimum-moves-to-reach-target-score/)   
**Difficulty**: Medium   
**Brief**:    
You are playing a game with integers. You start with the integer ``1`` and you want to reach the integer ``target``.   

In one move, you can either:   
- **Increment** the current integer by one (i.e., ``x = x + 1``).   
- **Double** the current integer (i.e., ``x = 2 * x``).   

You can use the **increment** operation **any** number of times, however, you can only use the **double** operation **at most** ``maxDoubles`` times.   

Given the two integers ``target`` and ``maxDoubles``, return *the minimum number of moves needed to reach* ``target`` *starting with* ``1``.   

### Example   
**Input**: ``target = 19, maxDoubles = 2``   
**Output**: ``7``   
**Explanation**:   
Increment 3 times so x = 4   
Double once so x = 8   
Increment once so x = 9   
Double again so x = 18   
Increment once so x = 19   

### Solution   
**Runtime**: ``0 ms``   
**Memory**: ``5.8 MB``   
```
class Solution {
public:
  int minMoves(int target, int maxDoubles) {
    int count=0;
    
    //while the maxDoubles AND target are greater than 0, the while loop will run and divide or decrement by counting backwards.
    while(maxDoubles && target){
      if(target%2){
        target--;
      }else{
        maxDoubles--;
        target=target/2;
      }
      count++;
    }
    
    //since the increment until target value starts from 1, I need to deduct 1 from the final result
    return count+target-1;
  }
};
``` 

