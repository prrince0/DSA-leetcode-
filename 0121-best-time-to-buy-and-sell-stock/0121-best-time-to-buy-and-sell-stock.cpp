class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int prev = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            int buy = min(prev, prices[i]);
            int res = prices[i] - prev;
            ans = max(ans, prices[i] - prev);
            prev = min(prev, prices[i]);
        }

        return ans;
    }
};