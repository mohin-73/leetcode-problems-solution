class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = ssize(nums), minSum = -1;

        for (int size = l; size <= r; ++size) {
            int left = 0, currSum = 0;

            for (int right = 0; right < n; ++right) {
                currSum += nums[right];

                if (right - left + 1 == size) {
                    if (currSum > 0) {
                        if (minSum == -1) {
                            minSum = currSum;
                        } else {
                            minSum = min(minSum, currSum);
                        }
                    }

                    currSum -= nums[left++];
                }
            }
        }

        return minSum;
    }
};
