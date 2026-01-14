class Solution {
public:
    int mySqrt(int x) {
        long long left=1;
        long long right=x;
        while(left<=right){
            long long mid=(left+right)/2;
            long long value= mid*mid;
            if(value<x){
                left=mid+1;
            }else if(value>x){
                right=mid-1;
            }else{
                return value/mid;
            }
        }
        return right; 
        
    }
};