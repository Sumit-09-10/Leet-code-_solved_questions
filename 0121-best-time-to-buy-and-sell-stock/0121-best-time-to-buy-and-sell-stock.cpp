class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_profit=prices[0];
        int max_profit=0;
        int profit;
        for (int i=0;i<prices.size(); i++){
            if(prices[i]<min_profit){
                min_profit=prices[i];
                
            }
            profit=prices[i]-min_profit;
            if(profit>max_profit){
                max_profit=prices[i]-min_profit;
            }
            
        }
        return max_profit;
        
    }
};