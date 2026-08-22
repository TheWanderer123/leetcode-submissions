class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_char={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int total=0;
        for (int i=0;i<s.size();++i){
            if(i<s.size()-1 && roman_char[s[i]]<roman_char[s[i+1]]){
                total-=roman_char[s[i]];
            } else {
                total+=roman_char[s[i]];
            }
        }
        return total;
    }
};