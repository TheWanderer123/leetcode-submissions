class Solution {
public:
    int minimumPushes(string word) {
        int total=0;
        for(int i=0;i<word.size();++i){
            int push=(i/8)+1;
            total+=push;
        }
        return total;
    }
};