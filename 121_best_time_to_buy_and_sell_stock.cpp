#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuyingPrice = prices[0];
        int maxProfit = 0;
        for (int current = 1; current < prices.size(); ++current) {
            maxProfit = max(maxProfit, prices[current] - minBuyingPrice);
            minBuyingPrice = min(minBuyingPrice, prices[current]);
        }
        return maxProfit;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution solution;
    int maxProfit = solution.maxProfit(prices);
    cout << maxProfit << '\n';
    return 0;
}
