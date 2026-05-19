class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smin = INT_MAX;
        int smax = INT_MIN;
        
        for( int i = 0 ; i < prices.size() ; i++ ) {
            smin = min(smin,prices[i]);
            smax = max(smax,prices[i] - smin);
        }
        return smax;
    }
};
