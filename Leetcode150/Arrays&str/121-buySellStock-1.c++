class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < n; i++) {
            int cost = prices[i] - mini;
            maxProfit = max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};


/*

1. Initially, the "minimal price" is at first index and "maxProfit" is initialized as 0.
2. n ---> length of price list
3. we're iterating from 1st index and 0th index is considered as mini, initializing cost and
   and subracting the "prices" with "minimal".
4. Updating maxProfit
5. Updating mini.

*/