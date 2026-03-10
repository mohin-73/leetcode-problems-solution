#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int divisorSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int divisorCount = 0, sum = 0;
            for (int j = 1; j * j <= nums[i]; ++j) {
                if (nums[i] % j == 0 && (nums[i] / j) != j) {
                    divisorCount += 2;
                    sum += j + nums[i] / j;
                }
                if (nums[i] % j == 0 && (nums[i] / j) == j) {
                    ++divisorCount;
                    sum += j;
                }
            }
            if (divisorCount == 4) {
                divisorSum += sum;
            }
        }
        return divisorSum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {21, 4, 7};
    Solution solve;
    int result = solve.sumFourDivisors(nums);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.

    ----------
    Example 1:
    ----------

    Input: nums = [21,4,7]
    Output: 32
    Explanation: 
    21 has 4 divisors: 1, 3, 7, 21
    4 has 3 divisors: 1, 2, 4
    7 has 2 divisors: 1, 7
    The answer is the sum of divisors of 21 only.

    ----------
    Example 2:
    ----------

    Input: nums = [21,21]
    Output: 64

    ----------
    Example 3:
    ----------

    Input: nums = [1,2,3,4,5]
    Output: 0

    ------------
    Constraints:
    ------------

    1 <= nums.length <= 10^4
    1 <= nums[i] <= 10^5
*/
