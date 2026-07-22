class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int uniqueid=nums.size()/2;
        for (int i=0;i<nums.size();++i){
            if(i==uniqueid) continue;
            if (nums[i]==nums[uniqueid]) return 0;
        }
        return 1;
    }
};