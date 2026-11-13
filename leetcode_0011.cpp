class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, maxWater = 0;
        int right = ssize(height) - 1;

        while (left < right) {
            int minHeight = min(height[left], height[right]);
            int currWidth = right - left;

            maxWater = max(maxWater, minHeight * currWidth);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxWater;
    }
};
