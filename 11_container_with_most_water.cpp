#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;
        while (right > left) {
            int water = (right - left) * min(height[left], height[right]);
            maxWater = max(maxWater, water);
            height[right] > height[left] ? ++left : --right;
        }
        return maxWater;
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
