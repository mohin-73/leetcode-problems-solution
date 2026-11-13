class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = ssize(nums);
        int increasing = 1, decreasing = 1, longest = 1;

        for (int idx = 1; idx < len; ++idx) {
            if (nums[idx] > nums[idx - 1]) {
                ++increasing;
                decreasing = 1;
            } else if (nums[idx] < nums[idx - 1]) {
                ++decreasing;
                increasing = 1;
            } else {
                increasing = decreasing = 1;
            }

            longest = max({longest, increasing, decreasing});
        } 

        return longest; // Length of the longest monotonic subarray
    }
};

/*
    A monotonic subarray is a contiguous part of an array where the
    elements are either:

    1. Strictly increasing: Every next element is greater than the previous one.
    2. Strictly decreasing: Every next element is smaller than the previous one.
*/
