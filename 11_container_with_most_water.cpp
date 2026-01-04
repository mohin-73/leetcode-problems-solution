#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_water = 0;
        while (right > left) {
            int water = (right - left) * min(height[left], height[right]);
            max_water = max(max_water, water);
            height[right] > height[left] ? ++left : --right;
        }
        return max_water;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solution;
    int ans = solution.maxArea(height);
    cout << ans << '\n';
    return 0;
}
