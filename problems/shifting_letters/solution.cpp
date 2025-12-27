class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<long long> prefix_sum;
        for(long long j=shifts.size()-1;j>=0;j--){
            if(j== shifts.size()-1){
                prefix_sum.push_back(shifts[j]);
            }else{
                prefix_sum.push_back(prefix_sum[(shifts.size()-1)-(j+1)]+shifts[j]);
            }
        }
        string final_string="";
        for(long long u=prefix_sum.size()-1;u>=0;u--){
            long long val= ((long long) prefix_sum[u]) % 26;
            long long ascii_val = (long long) s[(prefix_sum.size()-1)-(u)];
            if(ascii_val+val > 122){
                final_string+= (char) ((ascii_val+val)-26);
            }else{
                final_string+= (char) ((ascii_val+val));
            }



        }
        return final_string;
        
    }
};