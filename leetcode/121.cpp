class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mprofit = 0;
        int min = prices[0];
        for (int i = 1; i < prices.size(); i++){
            if (prices[i] < min){
                min = prices[i];
                profit = 0;
                continue;
            }
            profit = prices[i] - prices[i-1] + profit;
            if (mprofit < profit){
                mprofit = profit;
            }
        }
        return mprofit;
    }
};