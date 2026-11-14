int min(int x, int y) {
    return x > y ? y : x;
}

int minimumSumSubarray(int* nums, int numsSize, int l, int r) {
    int minSum = -1;

    for (int size = l; size <= r; ++size) {
        int left = 0, currSum = 0;

        for (int right = 0; right < numsSize; ++right) {
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
