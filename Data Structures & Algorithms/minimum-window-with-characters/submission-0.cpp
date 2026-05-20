class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m1;
        int n = s.length();
        int left = 0 , right = 0;
        if(s.length() < t.length()) return "";
        for(int i : t) {
            m1[i ]++;
        }
        int found = 0;
        int ans  = INT_MAX;
        int start = left , end = right;
        int minz;
        unordered_map<char,int> m2;
        while(right < n) {
            m2[s[right] ]++;
            if( m1.count(s[right]) and m1[s[right] ] == m2[s[right] ]) found++;
            while(found == m1.size()){
                if(right - left + 1 < ans) {
                    ans = right - left + 1;
                    start = left;
                }
                m2[s[left]]--;
                //if(m2[s[left]] == 0) m2.erase(s[left]);
                if(m1.count(s[left]) and m1[s[left]] > m2[s[left]]) found--;
                left++;

            }
            right++;

        }

        if( ans == INT_MAX) return "";
        return s.substr(start, ans);
    }
};
