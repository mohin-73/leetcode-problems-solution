class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i += 1) {
            mp[nums[i]] += 1;
        }

        for (int i = 0; i < nums.size(); i += 1) {
            int k = target - nums[i];
            mp[nums[i]] -= 1;
            if (mp[k]) {
                res.push_back(i);
                for (int j = i + 1; j < nums.size(); j += 1) {
                    if (nums[j] == k) {
                        res.push_back(j);
                        break;
                    }
                }
            } else {
                mp[nums[i]] += 1;
            }
        }
        
        return res;
    }
};
