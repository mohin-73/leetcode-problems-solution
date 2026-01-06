#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], curr_sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            curr_sum += nums[i];
            max_sum = max(max_sum, curr_sum);
            if (curr_sum < 0) {
                curr_sum = 0;
            }
        }
        return max_sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution solution;
    int max_subarray_sum = solution.maxSubArray(nums);
    cout << max_subarray_sum << '\n';
    return 0;
}
