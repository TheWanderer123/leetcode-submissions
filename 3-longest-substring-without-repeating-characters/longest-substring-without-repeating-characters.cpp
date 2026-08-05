class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int max_length=0;
        while (l<=r && r<s.size()){
            int dup=-1;
            for (int i=l;i<r;++i) {
                if (s[i] == s[r]) {
                    dup=i; break;
                }
            }
            if(dup!=-1) l=dup+1;
            else {
                int curr_length=r-l+1;
                max_length=max(max_length,curr_length);
                ++r;
            }
        }
        return max_length;
    }
};