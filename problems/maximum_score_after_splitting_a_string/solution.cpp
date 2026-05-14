
class Solution {
public:
    int maxScore(string s) {

        int Ones_Total=0;
        int Zero_left=0;
        int Ones_left=0;
        int maxi= INT_MIN;
        // result= Zero_left+Ones_right
        // result= Zero_left+ Ones_total - Ones_left
        // result= Zero_left- Ones_left + ones_total

        for(int i=0;i< s.size()-1;i++){
            if (s[i]=='0'){
                Zero_left++;
            }else if( s[i]=='1'){
                Ones_left++;
                Ones_Total++;

            }
            maxi= max(maxi, (Zero_left-Ones_left));

        }
        if(s[s.size()-1]=='1'){
            Ones_Total++;
        }
        return maxi+ Ones_Total;
        
        
    }
};