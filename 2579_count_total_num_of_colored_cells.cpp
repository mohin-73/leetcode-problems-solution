#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long coloredCells(int n) {
        return 2LL * n * (n - 1) + 1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    Solution solve;
    long long result = solve.coloredCells(n);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    There exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:

    At the first minute, color any arbitrary unit cell blue.
    Every minute thereafter, color blue every uncolored cell that touches a blue cell.

    Return the number of colored cells at the end of n minutes.

    ----------
    Example 1:
    ----------

    Input: n = 1
    Output: 1
    Explanation: After 1 minute, there is only 1 blue cell, so we return 1.

    ----------
    Example 2:
    ----------

    Input: n = 2
    Output: 5
    Explanation: After 2 minutes, there are 4 colored cells on the boundary and 1 in the center, so we return 5. 
    
    ------------
    Constraints:
    ------------

    1 <= n <= 10^5
*/
