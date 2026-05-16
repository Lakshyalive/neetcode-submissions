class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums) {
            s.insert(i);
        }
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(s.contains(nums[i] - 1)) {
                continue;
            }
            else {
                int temp = nums[i];
                int tempc = 0;
                while(s.count(temp) == 1) {
                    temp++;
                    tempc++;
                }
                count = max(tempc, count);
            }
        }
        return count;
    }
};
