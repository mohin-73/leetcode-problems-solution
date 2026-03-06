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
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution solve;
    int result = solve.majorityElement(nums);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given an array nums of size n, return the majority element.

    The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

    ----------
    Example 1:
    ----------

    Input: nums = [3,2,3]
    Output: 3

    ----------
    Example 2:
    ----------

    Input: nums = [2,2,1,1,1,2,2]
    Output: 2

    ------------
    Constraints:
    ------------

    n == nums.length
    1 <= n <= 5 * 10^4
    -10^9 <= nums[i] <= 10^9
    The input is generated such that a majority element will exist in the array.
    
    Follow-up: Could you solve the problem in linear time and in O(1) space?
*/
