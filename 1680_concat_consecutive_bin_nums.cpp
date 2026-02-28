#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int concatenatedBinary(int n) {
        long long result = 0;
        const int mod = 1e9 + 7;
        int d = 0;
        for (int i = 1; i <= n; ++i) {
            if ((i & (i - 1)) == 0) {
                ++d;
            }
            result = ((result << d) + i) % mod;
        }
        return result;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 12;
    Solution solution;
    int ans = solution.concatenatedBinary(n);
    cout << ans << '\n';
    return 0;
}
