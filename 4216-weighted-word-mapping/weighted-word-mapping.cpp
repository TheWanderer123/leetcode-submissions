class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(const string& word:words){
            int cur=0;
            for(char c:word){
                int id=(c-97);
                cur+=weights[id];
            }
            int rem=cur%26;
            char letter='z'-rem;
            res+=letter;
        }
        return res;
    }
};