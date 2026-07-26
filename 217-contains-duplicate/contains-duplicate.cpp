class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for (int i=0;i<nums.size();++i){
            if(check.count(nums[i])>0) return 1;
            else check.insert(nums[i]);
        }
        return 0;
    }
};