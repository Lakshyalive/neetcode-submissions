class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int n = s.length();
        int ans = 0;
        int left = 0 , right = 0;
        while(right < n) {
            m[s[right]]++;
            while(m[s[right]] > 1 and left < right) {
                m[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;           
        }
        return ans;
    }
};
