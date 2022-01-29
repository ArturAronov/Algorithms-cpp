## 2144. Minimum Cost of Buying Candies With Discount   
**Source**: [leetCode](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/)   
**Difficulty**: Easy   
**Brief**:    
A shop is selling candies at a discount. For **every two** candies sold, the shop gives a **third** candy for **free**.   

The customer can choose **any** candy to take away for free as long as the cost of the chosen candy is less than or equal to the **minimum** cost of the two candies bought.   

- For example, if there are ``4`` candies with costs ``1``, ``2``, ``3``, and ``4``, and the customer buys candies with costs ``2`` and ``3``, they can take the candy with cost ``1`` for free, but not the candy with cost ``4``.   

Given a **0-indexed** integer array ``cost``, where ``cost[i]`` denotes the cost of the ``ith`` candy, return *the* ***minimum cost*** *of buying* ***all*** *the candies*.   

### Example   
**Input**: ``[6,5,7,9,2,2]``   
**Output**: ``23``   
**Explanation**:   
The way in which we can get the minimum cost is described below:    
- Buy candies with costs 9 and 7   
- Take the candy with cost 6 for free   
- We buy candies with costs 5 and 2   
- Take the last remaining candy with cost 2 for free   
Hence, the minimum cost to buy all candies is 9 + 7 + 5 + 2 = 23.   

### Solution   
**Runtime**: ``6 ms``   
**Memory**: ``10.8 MB``   

```
class Solution {
public:
  int minimumCost(vector<int>& cost) {
    sort(cost.begin(), cost.end(), greater<>());
    int remainder=cost.size()%3;
    int result=0;
  
    while(remainder<3){
      cost.push_back(0);
      remainder++;
    }
  
    for(int i=0; i<cost.size(); i+=3){
      result=result+cost[i]+cost[i+1];
    }
    
    return result;
  }
};
``` 

