#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIdx;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            int complement = target - nums[i];
            auto it = numToIdx.find(complement);
            if (it != numToIdx.end()) {
                return {it->second, i};
            }
            numToIdx[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solve;
    vector<int> result = solve.twoSum(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]\n";
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.

    ----------
    Example 1:
    ----------

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

    ----------
    Example 2:
    ----------

    Input: nums = [3,2,4], target = 6
    Output: [1,2]

    ----------
    Example 3:
    ----------

    Input: nums = [3,3], target = 6
    Output: [0,1]

    ------------
    Constraints:
    ------------

    2 <= nums.length <= 10^4
    -10^9 <= nums[i] <= 10^9
    -10^9 <= target <= 10^9
    Only one valid answer exists.
*/
