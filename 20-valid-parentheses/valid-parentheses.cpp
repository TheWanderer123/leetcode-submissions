class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s[0]==')'||s[0]==']'||s[0]=='}') return 0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]); 
            else{
                if (st.empty()) return 0;
                if((s[i]==')'&&st.top()=='(') ||
                   (s[i]==']'&&st.top()=='[') ||
                   (s[i]=='}'&&st.top()=='{')) {st.pop();}
                else return 0;
            }
        }
        return st.empty();
    }
};