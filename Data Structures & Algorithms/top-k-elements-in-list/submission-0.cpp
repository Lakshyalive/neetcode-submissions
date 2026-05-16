class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i : nums){
            m[i]++;
        }
        vector<vector<int>> ans(nums.size() + 1);
        for(auto i : m){
            ans[i.second].push_back(i.first);
        }
        vector<int> a;
        for(int i = ans.size() - 1 ; i > 0 ; i--) {
            if(!ans[i].empty()) {
                for(int num : ans[i]) {
                    a.push_back(num);
                    if(a.size() == k) {
                        return a;
                    }
                }
            }
        }
    }
};
