#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (right >= left) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
                break;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {3, 4, 5, 7};
    int target = 8;
    Solution solution;
    int pos = solution.searchInsert(nums, target);
    cout << pos << '\n';
    return 0;
}
