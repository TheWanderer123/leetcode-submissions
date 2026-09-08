class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int place=0;
        for (int i=0;i<flowerbed.size();++i){
            if (flowerbed[i]==1) {++i;continue;}
            //           left bound                            right bound
            if ((i==0 || flowerbed[i-1]==0)&&(i==flowerbed.size()-1 || flowerbed[i+1]==0)) {++place;++i;}
        }
        return (place>=n);
    }
};