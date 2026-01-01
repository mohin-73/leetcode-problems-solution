#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0], votes = 1;
        for (int current = 1; current < nums.size(); ++current) {
            if (votes == 0) {
                candidate = nums[current];
                ++votes;
            } else if (candidate == nums[current]) {
                ++votes;
            } else {
                --votes;
            }
        }
        return candidate;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution solution;
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans = solution.majorityElement(nums);
    cout << ans << '\n';
    return 0;
}
