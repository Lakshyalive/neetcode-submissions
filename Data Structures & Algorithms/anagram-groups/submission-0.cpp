class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string i : strs) {
            int count[26] = {0};
            string key = "";
            for(char j : i) {
                count[j-'a']++;
            }
            for(int k = 0 ; k<26;k++){
                key.append(to_string(count[k]));
                key.append("#");
            }
            m[key].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i: m) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
