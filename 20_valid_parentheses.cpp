#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
                continue;
            }
            if (stk.empty()) {
                return false;
            }
            char op = stk.top();
            stk.pop();
            if (op == '(' && s[i] != ')') {
                return false;
            }
            if (op == '{' && s[i] != '}') {
                return false;
            } 
            if (op == '[' && s[i] != ']') {
                return false;
            } 
        }
        return stk.empty();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str = "([{}])";
    Solution solution;
    bool b = solution.isValid(str);
    if (b) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    return 0;
}
