class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int minProfit=INT_MAX;
    int profit=0;
    
    for(int i=0; i<prices.size(); i++){
      minProfit=min(minProfit, prices[i]);
      profit=max(profit, prices[i]-minProfit);
    }
    
    return profit;
  }
};
