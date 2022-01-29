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
