class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> cleans;
        // for (const string& s: emails){
        //     size_t posat=s.find('@');
        //     string loc=s.substr(0,posat);
        //     string clean="";
        //     for (const char& c:loc){
        //         if(c=='+') break;
        //         else if(c=='.') continue;
        //         else clean+=c;
        //     }
        //     string dom=s.substr(posat);
        //     clean+=dom;
        //     cleans.insert(clean);
        // }
        // return cleans.size();
        for(const string& email:emails){
            string clean="";
            int i=0;
            while (email[i]!='@'){
                if(email[i]=='.'){
                    ++i;continue;
                }
                if(email[i]=='+'){
                    while (email[i]!='@') ++i;
                    break;
                }
                clean+=email[i];
                ++i;
            }
            clean+=email.substr(i);
            cleans.insert(clean);
        }
        return cleans.size();
    }
};
