class Solution {
public:
    int minimumPushes(string word) {
        // vector<int>freq(26,0);
        // int total=0;
        // for(char c:word) ++freq[c-'a'];
        // sort(freq.rbegin(),freq.rend());// the biggest in front
        // for(int i=0;i<26;++i){
        //     if(freq[i]==0) break;
        //     int push=(i/8)+1;
        //     total+=push*freq[i];
        // }
        // return total;
        int total=0;
        unordered_map<char,int>freqmap;
        for(char c:word) ++freqmap[c];
        vector<int>freq;
        for(auto&[c,f]:freqmap) freq.push_back(f);
        sort(freq.rbegin(),freq.rend()); // the biggest in front
        for(int i=0;i<freq.size();++i){
            if(freq[i]==0) break;
            int push=(i/8)+1;
            total+=push*freq[i];
        }
        return total;
    }
};