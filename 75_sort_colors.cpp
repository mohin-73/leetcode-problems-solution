#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, two = nums.size() - 1;
        for (int current = 0; current <= two; ++current) {
            if (nums[current] == 0) {
                swap(nums[current], nums[zero]);
                ++zero;
            } else if (nums[current] == 2) {
                swap(nums[current], nums[two]);
                --two;
                --current;
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution solution;
    solution.sortColors(nums);
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    return 0;
}
