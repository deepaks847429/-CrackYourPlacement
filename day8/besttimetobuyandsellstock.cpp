class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)return 0;
        int profit=0;
        int min_buy=prices[0];
        for(int i=0;i<prices.size();i++){
            min_buy=min(min_buy,prices[i]);
            profit=max(profit,prices[i]-min_buy);
        }
        return profit;
    }
};