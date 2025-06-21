#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> seen;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int temp = target - nums[i];

            if (seen[temp]) {
                result.push_back(seen[temp] - 1);
                result.push_back(i);
                break;
            }

            seen[nums[i]] = i + 1;
        }

        return result;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "[" << result[0] << "," << result[1] << "]\n";
    } else {
        cout << "No valid pair found.\n";
    }

    return 0;
}
