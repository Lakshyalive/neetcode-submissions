class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pmax(height.size());
        vector<int> smax(height.size());
        pmax[0] = height[0];
        smax[height.size() - 1] = height[height.size() - 1];
        for(int i = 1; i < height.size() - 1; i++) {
            pmax[i] = max(pmax[i-1], height[i]);
        }
        for(int i = height.size() - 2; i >= 0; i--) {
            smax[i] = max(smax[i+1], height[i]);
        }
        int total = 0;
        for(int i = 0 ; i < height.size() - 1 ; i++) {
            if(height[i] < pmax[i] and height[i] < smax[i]) {
                total += (min(pmax[i],smax[i])) - height[i];
            }
        }
        return total;
    }
};
