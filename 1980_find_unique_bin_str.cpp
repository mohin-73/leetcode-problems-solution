#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int r, size = (2 << n) + 1;
        vector<bool> lookUp(size, false);
        for (string s : nums) {
            int k = 0, b = 0;
            for (int i = n - 1; i >= 0; --i) {
                if (s[i] == '1') {
                    k += 1 << b;
                }
                ++b;
            }
            if (k <= size) {
                lookUp[k] = true;
            }
        }
        for (int i = 0; i <= size; ++i) {
            if (!lookUp[i]) {
                r = i;
                break;
            }
        }
        string uniqueBinStr;
        while (uniqueBinStr.length() < n) {
            uniqueBinStr = to_string(r % 2) + uniqueBinStr;
            r /= 2;
        }
        return uniqueBinStr;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> nums = {"01", "10"};
    Solution solve;
    string result = solve.findDifferentBinaryString(nums);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------
    
    Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.

    ----------
    Example 1:
    ----------

    Input: nums = ["01","10"]
    Output: "11"
    Explanation: "11" does not appear in nums. "00" would also be correct.

    ----------
    Example 2:
    ----------

    Input: nums = ["00","01"]
    Output: "11"
    Explanation: "11" does not appear in nums. "10" would also be correct.

    ----------
    Example 3:
    ----------

    Input: nums = ["111","011","001"]
    Output: "101"
    Explanation: "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.
    
    ------------
    Constraints:
    ------------

    n == nums.length
    1 <= n <= 16
    nums[i].length == n
    nums[i] is either '0' or '1'.
    All the strings of nums are unique.
*/
