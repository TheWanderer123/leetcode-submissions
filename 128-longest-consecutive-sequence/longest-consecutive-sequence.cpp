class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int max_streak=0;
        for (int num:numset){
            if(!numset.count(num-1)){
                int current_num=num;
                int current_streak=1;
                while(numset.count(current_num+1)){
                    ++current_num;++current_streak;
                }
                max_streak=max(max_streak,current_streak);
            }
        }
        return max_streak;
    }
};