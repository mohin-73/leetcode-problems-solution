#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = abs(1LL * x), y = 0;
        while (temp) {
            y = y * 10 + temp % 10;
            temp /= 10;
        }
        return x == y;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 121;
    Solution solve;
    bool result = solve.isPalindrome(x);
    if (result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------
    
    Given an integer x, return true if x is a palindrome, and false otherwise.

    ----------
    Example 1:
    ----------

    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.

    ----------
    Example 2:
    ----------

    Input: x = -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

    ----------
    Example 3:
    ----------

    Input: x = 10
    Output: false
    Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
    
    ------------
    Constraints:
    ------------

    -2^31 <= x <= 2^31 - 1
*/
