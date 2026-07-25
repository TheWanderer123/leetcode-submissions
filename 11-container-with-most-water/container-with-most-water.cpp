class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxwater=0;
        while (l<r){
            int currheight=min(height[l],height[r]);
            int currwater=currheight*(r-l);
            maxwater=max(maxwater,currwater);
            if(height[l]<height[r]){
                ++l;
            } else {
                --r;
            }
        }
        return maxwater;
    }
};