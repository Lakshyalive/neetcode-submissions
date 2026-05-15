class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int i = 0;
        while(i < nums.size()) {
            int ans = target - nums[i];
            if(m.count(ans)) return {m[ans] , i};
            else m[nums[i]] = i;
            i++;
        }
    }
};
