#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution solution;
    int maxSum = solution.maxSubArray(nums);
    cout << maxSum << '\n';
    return 0;
}
