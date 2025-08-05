class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum= prices[0];
        int max_profit=0;
        for(int i=1;i< prices.size();i++){
            int cost= prices[i]-minimum;
            max_profit= max(max_profit,cost);
            minimum= min(minimum,prices[i]);
        }
        return max_profit;
    }
};