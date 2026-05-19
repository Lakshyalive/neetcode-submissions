class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0 , right = heights.size() - 1;
        int water = 0 ;
        while(left < right) {
            int temp = (min(heights[left],heights[right])) * (right - left);
            water = max(water, temp);
            if(heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
            
        }
        return water;
    }
};
