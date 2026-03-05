#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 1;
    Solution solve;
    bool result = solve.isPowerOfTwo(n);
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

    Given an integer n, return true if it is a power of two. Otherwise, return false.

    An integer n is a power of two, if there exists an integer x such that n == 2^x.
    
    ----------
    Example 1:
    ----------

    Input: n = 1
    Output: true
    Explanation: 2^0 = 1

    ----------
    Example 2:
    ----------

    Input: n = 16
    Output: true
    Explanation: 2^4 = 16

    ----------
    Example 3:
    ----------

    Input: n = 3
    Output: false
    
    ------------
    Constraints:
    ------------

    -2^31 <= n <= 2^31 - 1
    
    Follow up: Could you solve it without loops/recursion?
*/
