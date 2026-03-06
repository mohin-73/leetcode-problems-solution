#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
                continue;
            }
            if (stk.empty()) return false;
            char op = stk.top();
            stk.pop();
            if (op == '(' && c != ')') return false;
            if (op == '{' && c != '}') return false;
            if (op == '[' && c != ']') return false;
        }
        return stk.empty();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str = "([{}])";
    Solution solve;
    bool result = solve.isValid(str);
    if (result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
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
