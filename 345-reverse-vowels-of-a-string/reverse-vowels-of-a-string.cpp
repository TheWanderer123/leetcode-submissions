class Solution {
public:
    bool isVowel(char c){
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
        return 0;
    }
    string reverseVowels(string s) {
        for (int l=0,r=s.size()-1;l<r;){
            if(!isVowel(s[l]) || !isalpha(s[l])){++l;continue;}
            if(!isVowel(s[r]) || !isalpha(s[r])){--r;continue;}
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            ++l;--r;
        }
        return s;
    }
};