class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> m;
        int left = 0 , right = 0;
        int n = s2.length();
        if(s1.length() >s2.length()) return false;
        int counts1[26] = {0};
        for(char i : s1) {
            counts1[i - 'a']++;
        }
        int counts2[26] = {0};
        while(right < n) {
            counts2[s2[right] - 'a']++;
            if(right - left +1> s1.length()) {
                counts2[s2[left] - 'a']--;
                left++;
            }
            if(equal(std::begin(counts1), std::end(counts1), std::begin(counts2))) return true;
            right++;
        }
        return false;
    }
};
