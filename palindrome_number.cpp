#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long temp = x, y{};

        while (temp) {
            y = y * 10 + temp % 10;
            temp = temp / 10;
        }

        return y == x;
    }
};

int main() {
    Solution solution;

    int num;
    cin >> num;

    if (solution.isPalindrome(num)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
