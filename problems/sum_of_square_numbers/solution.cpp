class Solution {
public:
    bool judgeSquareSum(int c) {
        long  low=0;
        long  high= (int) sqrt(c);
        bool flag=false;
        if (c<0) return false;
        while(low<=high){
            long squares= (low*low)+(high*high);
            if(squares>c){
                
                high--;
                if (low>high) flag=true;
            }else if(squares<c){
                low++;
                if(low>high) flag=true;
            }
            else{
                return true;
            }

        }
        if(flag) return false;
        return true;
        
    }
};