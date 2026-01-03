#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length() - 1;
        int last_word_length = 0;
        while (len >= 0 && s[len] == ' ') {
            --len;
        }
        while (len >= 0 && s[len] != ' ') {
            ++last_word_length;
            --len;
        }
        return last_word_length;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str = "   fly me   to   the moon  ";
    Solution solution;
    int length = solution.lengthOfLastWord(str);
    cout << length << '\n';
    return 0;
}
