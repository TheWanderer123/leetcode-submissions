class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> cleans;
        for (const string& s: emails){
            size_t posat=s.find('@');
            string clean="";
            for (const char& c:s.substr(0,posat)){
                if(c=='+') break;
                else if(c=='.') continue;
                else clean+=c;
            }
            clean+=s.substr(posat);
            cleans.insert(clean);
        }
        return cleans.size();
    }
};