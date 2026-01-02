#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> index;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (seen[complement]) {
                index.push_back(seen[complement] - 1);
                index.push_back(i);
                break;
            }
            seen[nums[i]] = i + 1;
        }
        return index;
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
