#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> openBrackets;
        for (char bracket : s) {
            if (isOpenBracket(bracket)) {
                openBrackets.push(bracket);
                continue;
            }
            if (openBrackets.empty()) {
                return false;
            }
            char lastOpen = openBrackets.top();
            openBrackets.pop();
            if (!isMatching(lastOpen, bracket)) {
                return false;
            }
        }
        return openBrackets.empty();
    }

private:
    bool isOpenBracket(char c) {
        return c == '(' || c == '{' || c == '[';
    }
    bool isMatching(char open, char close) {
        bool first = open == '(' && close == ')';
        bool second = open == '{' && close == '}';
        bool third = open == '[' && close == ']';
        return first || second || third;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str = "([{}])";
    Solution solve;
    bool result = solve.isValid(str);
    cout << (result ? "true\n" : "false\n");
    return 0;
}

/*
    ------------------
    Problem Statement:
    ------------------

    Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    1. Open brackets must be closed by the same type of brackets.

    2. Open brackets must be closed in the correct order.

    3. Every close bracket has a corresponding open bracket of the same type.
    
    ----------
    Example 1:
    ----------

    Input: s = "()"

    Output: true

    ----------
    Example 2:
    ----------

    Input: s = "()[]{}"

    Output: true

    ----------
    Example 3:
    ----------

    Input: s = "(]"

    Output: false

    ----------
    Example 4:
    ----------

    Input: s = "([])"

    Output: true

    ----------
    Example 5:
    ----------

    Input: s = "([)]"

    Output: false

    ------------
    Constraints:
    ------------

    1 <= s.length <= 10^4
    s consists of parentheses only '()[]{}'.
*/
