class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        int count=0;
        if((n &(n-1)) ==0){

            for (int i = 0; i < 32; ++i) { 

                if (!((n >> i) & 1)) { 
                    count++;
                }else{
                    break;
                }
            }
            if (count%2==0){
                return true;
            }else{
                false;
            }
        }
        return false;
        
    }
};