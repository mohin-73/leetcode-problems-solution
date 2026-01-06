#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length() - 1;
        int lastWordLength = 0;
        while (len >= 0 && s[len] == ' ') {
            --len;
        }
        while (len >= 0 && s[len] != ' ') {
            ++lastWordLength;
            --len;
        }
        return lastWordLength;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str = "   fly me   to   the moon  ";
    Solution solution;
    int lastWordLength = solution.lengthOfLastWord(str);
    cout << lastWordLength << '\n';
    return 0;
}
