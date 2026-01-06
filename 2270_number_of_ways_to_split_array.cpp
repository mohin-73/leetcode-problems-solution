#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;
        for (auto x : nums) {
            totalSum += x;
        }
        int numOfWays = 0;
        long long leftSum = 0;
        for (int i = 0; i < n - 1; ++i) {
            leftSum += nums[i];
            totalSum -= nums[i];
            if (leftSum >= totalSum) {
                ++numOfWays;
            }
        }
        return numOfWays;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {10, 4, -8, 7};
    Solution solution;
    int numOfWays = solution.waysToSplitArray(nums);
    cout << numOfWays << '\n';
    return 0;
}
