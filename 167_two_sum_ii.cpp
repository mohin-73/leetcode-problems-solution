#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = nums.size() - 1;
        for (int i = 0; i < j; ++i) {
            if (nums[i] + nums[j] == target) {
                return {i + 1, j + 1};
            } else if (nums[i] + nums[j] > target) {
                --j;
                --i;
            }
        }
        return {};
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> idx = solution.twoSum(nums, target);
    cout << idx[0] << ' ' << idx[1] << '\n';
    return 0;
}
