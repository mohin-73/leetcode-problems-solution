#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), minLen = INT_MAX;
        for (int i = 0; i < n; ++i) {
            minLen = min(minLen, (int)strs[i].length());
        }
        string commonPrefix = "";
        for (int i = 0; i < minLen; ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < n; ++j) {
                if (strs[j][i] != ch) {
                    return commonPrefix;
                }
            }
            commonPrefix += ch;
        }
        return commonPrefix;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> strs = {"flower", "flow", "flight"};
    Solution solve;
    string result = solve.longestCommonPrefix(strs);
    cout << result << '\n';
    return 0;
}
