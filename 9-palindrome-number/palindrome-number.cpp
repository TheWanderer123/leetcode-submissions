class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return 0;
        int temp=x;
        long long sum=0;
        while (temp>0){
            sum=(sum*10)+(temp%10);
            temp/=10;
        }
        return (x==sum);
    }
};