#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true, isDecreasing = true;
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
    Solution solve;
    bool result = solve.isMonotonic(nums);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    An array is monotonic if it is either monotone increasing or monotone decreasing.

    An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

    Given an integer array nums, return true if the given array is monotonic, or false otherwise.
    
    ----------
    Example 1:
    ----------

    Input: nums = [1,2,2,3]
    Output: true

    ----------
    Example 2:
    ----------

    Input: nums = [6,5,4,4]
    Output: true

    ----------
    Example 3:
    ----------

    Input: nums = [1,3,2]
    Output: false

    ------------
    Constraints:
    ------------

    1 <= nums.length <= 10^5
    -10^5 <= nums[i] <= 10^5
*/
