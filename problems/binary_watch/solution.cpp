class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> vec;

        for(int i=0;i<=11;i++){
            int set_bits_in_i= __builtin_popcount(i);
            for(int j=0;j<=59;j++){
                int set_bits_in_j= __builtin_popcount(j);
                if(set_bits_in_i+set_bits_in_j==turnedOn){
                    string s="";
                    s+= to_string(i);
                    s+=":";
                    if(j/10==0){
                        s+="0";
                        s+= to_string(j);
                    }else if(j/10!=0){
                        s+= to_string(j);
                    }
                    vec.push_back(s);

                }
            }
        }
        return vec;
        
    }
};