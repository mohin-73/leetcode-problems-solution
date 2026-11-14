class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = ssize(s), left = 0, maxLen = 0;
        vector<int> freq(256, 0);
        
        for (int right = 0; right < len; ++right) {
            ++freq[s[right]];

            while (freq[s[right]] > 1) {
                freq[s[left++]]--;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
