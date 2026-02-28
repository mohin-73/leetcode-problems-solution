#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                isDecreasing = false;
            }
            if (nums[i] < nums[i - 1]) {
                isIncreasing = false;
            }
            if (!(isIncreasing || isDecreasing)) {
                return false;
            }
        }
        return isIncreasing || isDecreasing;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solution;
    bool ans = solution.isMonotonic(nums);
    cout << ans << '\n';
    return 0;
}
