class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        for(int i=0;i<min(strs.front().size(),strs.back().size());++i){
            if(strs.front()[i]!=strs.back()[i]) break;
            else res+=strs.back()[i];
        }
        return res;
    }
};