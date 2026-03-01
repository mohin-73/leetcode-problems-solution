#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool check[256];
        memset(check, false, sizeof(check));
        int left = 0, right = 0, maxLength = 0;
        while (right < s.length()) {
            if (!check[s[right]]) {
                check[s[right]] = true;
                ++right;
            } else {
                check[s[left]] = false;
                ++left;
            }
            maxLength = max(maxLength, right - left);
        }
        return maxLength;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "l;gn*sln%gh";
    Solution solution;
    int maxLen = solution.lengthOfLongestSubstring(s);
    cout << maxLen << '\n';
    return 0;
}
