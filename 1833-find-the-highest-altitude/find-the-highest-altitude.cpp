class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxal=0;
        int cural=0;
        for (int i=0;i<gain.size();++i){
            cural+=gain[i];
            maxal=max(maxal,cural);
        }
        return maxal;
    }
};