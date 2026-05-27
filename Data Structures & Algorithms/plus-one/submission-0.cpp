class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 0;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(i == n - 1) {
                digits[i] = digits[i] + 1;
            }
            else if(carry == 1){
                digits[i] += carry;
                carry--;
            }
            
            if(digits[i] == 10) {
                carry = 1;
                digits[i] = 0;
            }
            ans.push_back(digits[i]);
        }
        if(carry == 1) ans.push_back(1);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
