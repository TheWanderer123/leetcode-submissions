class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> cleans;
        for (const string& s: emails){
            size_t posat=s.find('@');
            string loc=s.substr(0,posat);
            string clean="";
            for (const char& c:loc){
                if(c=='+') break;
                else if(c=='.') continue;
                else clean+=c;
            }
            string dom=s.substr(posat);
            clean+=dom;
            cleans.insert(clean);
        }
        return cleans.size();
    }
};