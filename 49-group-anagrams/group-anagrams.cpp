class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ana;
        for(const string& str:strs){
            string sorted=str;
            sort(sorted.begin(),sorted.end());
            ana[sorted].push_back(str);
        }
        vector<vector<string>> res;
        for (auto&[sorted,v]:ana){
            res.push_back(v);
        }
        return res;
    }
};