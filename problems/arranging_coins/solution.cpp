class Solution {
public:
    int solve_quadratic(long long num){
        long long val = 4*1*(2*num);
        long long D= 1+val;
        long long value = (-1+pow(D,0.5))/2;
        return value;
    }
    int arrangeCoins(int n) {
        int ans=solve_quadratic(n);
        return ans;
    }
};