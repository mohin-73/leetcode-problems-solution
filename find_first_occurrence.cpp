#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hl = haystack.length();
        int nl = needle.length();

        if (nl == 0) return 0;
        if (nl > hl) return -1;

        for (int i = 0; i <= hl - nl; ++i) {
            if (haystack[i] == needle[0]) {
                int j = 1;
                while (j < nl && haystack[i + j] == needle[j]) {
                    ++j;
                }
                if (j == nl) {
                    return i;
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    string haystack = "sadbutsad", needle = "sad";

    int ans = solution.strStr(haystack, needle);

    cout << ans << '\n';

    return 0;
}
