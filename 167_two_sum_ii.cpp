#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size() - 1;
        for (int i = 0; i < j; ++i) {
            if (numbers[i] + numbers[j] == target) {
                return {i + 1, j + 1};
                i = j;
                break;
            } else if (numbers[i] + numbers[j] > target) {
                --j;
                --i;
            }
        }
        return {};
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> idx = solution.twoSum(numbers, target);
    cout << idx[0] << ' ' << idx[1] << '\n';
    return 0;
}
