#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) return false;
        double x = log10(n) / log10(3); // Do not use float
        return x == floor(x);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 27;
    Solution solve;
    bool result = solve.isPowerOfThree(n);
    if (result) {
        cout << "true\n";
    } else {
        cout << "false";
    }
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given an integer n, return true if it is a power of three. Otherwise, return false.

    An integer n is a power of three, if there exists an integer x such that n == 3^x.

    ----------
    Example 1:
    ----------

    Input: n = 27
    Output: true
    Explanation: 27 = 3^3

    ----------
    Example 2:
    ----------

    Input: n = 0
    Output: false
    Explanation: There is no x where 3^x = 0.

    ----------
    Example 3:
    ----------

    Input: n = -1
    Output: false
    Explanation: There is no x where 3^x = (-1).
    
    ------------
    Constraints:
    ------------

    -2^31 <= n <= 2^31 - 1
    
    Follow up: Could you solve it without loops/recursion?
*/
