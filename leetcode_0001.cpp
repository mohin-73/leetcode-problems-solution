class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = ssize(nums);
        unordered_map<int, int> numToIdx;

        for (int idx = 0; idx < len; ++idx) {
            int complement = target - nums[idx];
            auto it = numToIdx.find(complement);

            if (it != numToIdx.end()) {
                return {it->second, idx};
            }

            numToIdx[nums[idx]] = idx;
        }

        return {};
    }
};
