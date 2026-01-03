#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for (auto x : nums) {
            sum += x;
        }
        int ways = 0;
        long long l_sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            l_sum += nums[i];
            sum -= nums[i];
            if (l_sum >= sum) {
                ++ways;
            }
        }
        return ways;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {10, 4, -8, 7};
    Solution solution;
    int ans = solution.waysToSplitArray(nums);
    cout << ans << '\n';
    return 0;
}
