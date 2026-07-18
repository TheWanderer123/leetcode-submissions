class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int>prefixgcd;
        prefixgcd.push_back(nums[0]);
        int mxi=nums[0]; 
        for (int i=1;i<nums.size();++i){
            mxi=max(mxi,nums[i]);
            int pref=gcd(nums[i],mxi);
            prefixgcd.push_back(pref);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long totalsum=0;
        for(int l=0,r=n-1;l<r;++l,--r){
            totalsum+=gcd(prefixgcd[l],prefixgcd[r]);
        }
        return totalsum;
    }
};