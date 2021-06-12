class Solution {
public:
    // 贪心策略
    // 最优 => 连续上涨（每天都买卖
    //         连续下降（不卖
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        for (int i = 1; i < n; i++) {
            ans += max(0, prices[i] - prices[i - 1]);
        }

        return ans;
    }
};