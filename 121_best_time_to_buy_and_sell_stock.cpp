#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buying_price = prices[0];
        int max_profit = 0;
        for (int current = 1; current < prices.size(); ++current) {
            max_profit = max(max_profit, prices[current] - min_buying_price);
            min_buying_price = min(min_buying_price, prices[current]);
        }
        return max_profit;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution solution;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int max_profit = solution.maxProfit(prices);
    cout << max_profit << '\n';
    return 0;
}
