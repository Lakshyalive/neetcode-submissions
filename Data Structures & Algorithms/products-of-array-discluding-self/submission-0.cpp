class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int d = 1;
        int zeros = 0;
        vector<int> zi;
        for(int i = 0 ; i< nums.size() ; i++ ) {
            if( nums[i] == 0){
                zeros++;
                zi.push_back(i);
                continue;
            }
            else{
                d *= nums[i];
            }
        }
        if(zeros > 1) {
            vector<int> a(nums.size(), 0);
            return a;
        }
        else if (zeros == 1) {
            vector<int> a(nums.size(), 0);
            a[zi[0]] = d;
            return a;
        }
        else{
            vector<int> a(nums.size(), d);
        
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0) {
                a[i] = d;
            }
            else{
                a[i] = a[i]/ nums[i];
            }
            
        }
        return a;
        }
    }
};
