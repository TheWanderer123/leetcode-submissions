class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>boolval;
        int max=*max_element(candies.begin(),candies.end());
        for(int&n:candies){
            boolval.push_back(n + extraCandies>=max);
        }
        return boolval;
    }
};