class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> m;
        int left = 0 , right = 0;
        int n = s.length();
        int maxfreq=0;
        int ans = 0;
        while(right < n) {
            m[s[right] - 'a']++;
            maxfreq = max(m[s[right] - 'a'], maxfreq);
            while(right - left + 1 - maxfreq > k) {
                m[s[left] - 'a']--;
                left++;
            } 
            ans = max(right - left + 1, ans);
            right++;
        }
        
        return ans;
    }
};
