class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int left = 0 , right = k - 1;
    
        while(right < n) {
            int maxi =  INT_MIN;
            for(int i = left ; i <= right ; i++) {
                maxi = max(nums[i], maxi);
            }
            ans.push_back(maxi);
            left++;
            right++;
        }
        return ans;
    }
};
