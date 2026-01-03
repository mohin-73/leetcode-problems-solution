#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0, right = nums.size() - 1;
        while (right >= left) {
            if (nums[left] == val) {
                swap(nums[left], nums[right]);
                --right;
            } else {
                ++left;
            }
        }
        return left;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {3, 2, 2, 3};
    int val = 2;
    Solution solution;
    int ans = solution.removeElement(nums, val);
    cout << ans << '\n';
    return 0;
}
