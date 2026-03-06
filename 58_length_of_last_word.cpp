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
    Solution solve;
    int result = solve.lengthOfLastWord(str);
    cout << result << '\n';
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given a string s consisting of words and spaces, return the length of the last word in the string.

    A word is a maximal substring consisting of non-space characters only.

    ----------
    Example 1:
    ----------

    Input: s = "Hello World"
    Output: 5
    Explanation: The last word is "World" with length 5.

    ----------
    Example 2:
    ----------

    Input: s = "   fly me   to   the moon  "
    Output: 4
    Explanation: The last word is "moon" with length 4.

    ----------
    Example 3:
    ----------

    Input: s = "luffy is still joyboy"
    Output: 6
    Explanation: The last word is "joyboy" with length 6.
    
    ------------
    Constraints:
    ------------

    1 <= s.length <= 10^4
    s consists of only English letters and spaces ' '.
    There will be at least one word in s.
*/
