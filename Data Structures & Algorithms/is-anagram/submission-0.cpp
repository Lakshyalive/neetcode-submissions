class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> s1;
        unordered_map<int, int> t1;
        for(int i : s) {
            s1[i]++;
        }
        for(int i : t) {
            t1[i]++;
        }
        if( s1 == t1) return true;
        else return false;
    }
};
