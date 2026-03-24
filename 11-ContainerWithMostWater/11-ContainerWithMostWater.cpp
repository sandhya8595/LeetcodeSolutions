// Last updated: 24/03/2026, 14:31:17
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int maxWater=0;
        while(l<r){
            int h = min(height[l],height[r]);
            int w = r-l;
            int water=w*h;

             maxWater = max(maxWater,water);

             if(height[l]<height[r])
                l++;
             else 
                 r--;
 
        }
        return maxWater;
    }
};
// why we use two pointer in this  (interview):- width is sorted thats the reason we use two pointer .