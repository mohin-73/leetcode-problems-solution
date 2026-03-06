#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int concatenatedBinary(int n) {
        long long decimalValue = 0;
        int d = 0, mod = 1e9 + 7;
        for (int i = 1; i <= n; ++i) {
            if ((i & (i - 1)) == 0) {
                ++d;
            }
            decimalValue = ((decimalValue << d) + i) % mod;
        }
        return decimalValue;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 12;
    Solution solve;
    int result = solve.concatenatedBinary(n);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given an integer n, return the decimal value of the binary string formed by concatenating the binary representations of 1 to n in order, modulo 10^9 + 7.

    ----------
    Example 1:
    ----------

    Input: n = 1
    Output: 1
    Explanation: "1" in binary corresponds to the decimal value 1.

    ----------
    Example 2:
    ----------

    Input: n = 3
    Output: 27
    Explanation: In binary, 1, 2, and 3 corresponds to "1", "10", and "11".
    After concatenating them, we have "11011", which corresponds to the decimal value 27.

    ----------
    Example 3:
    ----------

    Input: n = 12
    Output: 505379714
    Explanation: The concatenation results in "1101110010111011110001001101010111100".
    The decimal value of that is 118505380540.
    After modulo 10^9 + 7, the result is 505379714.
    
    ------------
    Constraints:
    ------------

    1 <= n <= 10^5
*/
