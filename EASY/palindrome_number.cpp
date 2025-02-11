class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = abs(1LL * x), y = 0;

        while (temp) {
            y = y * 10 + temp % 10;
            temp /= 10;
        }

        return x == y;

    }
};