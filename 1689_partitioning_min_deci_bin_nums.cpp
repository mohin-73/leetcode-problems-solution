#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int minDeciBinNums = 1;
        for (int i = 0; i < n.length(); ++i) {
            minDeciBinNums = max(minDeciBinNums, n[i] - 48);
            if (minDeciBinNums == 9) {
                return minDeciBinNums;
            }
        }
        return minDeciBinNums;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string n = "464641233471974";
    Solution solution;
    int minDeciBinNums = solution.minPartitions(n);
    cout << minDeciBinNums << '\n';
    return 0;
}
