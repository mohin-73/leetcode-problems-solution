#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int divisorSum = 0;
        for (int num : nums) {
            if (int(sqrt(num)) * int(sqrt(num)) == num) {
                continue;
            }
            int t = num, cnt = 0, a, b;
            for (int i = 2; i * i <= t; ++i) {
                if (t % i == 0) {
                    ++cnt;
                    a = i;
                    b = t / i;
                }
                if (cnt > 1) {
                    break;
                }
            }
            if (cnt == 1) {
                divisorSum += (1 + num + a + b);
            }
        }
        return divisorSum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {21, 4, 7};
    Solution solve;
    int result = solve.sumFourDivisors(nums);
    cout << result << '\n';
    return 0;
}
