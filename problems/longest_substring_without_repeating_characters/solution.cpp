class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size_str= s.size();
        int curr_val=0;
        int maximum= INT_MIN;
        int sum=0;
        int latest_index=-1;
        for (int i=1;i<size_str;i++){
            char curr_character= s[i];
            int character_index= i;
            sum=0;
            if(latest_index==-1){
                for(int j=0;j< character_index;j++){
                    
                    if(curr_character== s[j]){
                        latest_index=j;
                        break;
                    }else{
                        sum++;
                    }
                }
                // sum= character_index-1;
                maximum= max(sum,maximum);
               

            }else{
                // sum+= (character_index-1)- latest_index;
                for(int y= latest_index+1;y< character_index; y++){
                    if( curr_character== s[y]){
                        latest_index= y;
                       
                        break;
                    }else{
                        sum++;
                    }
                }
                maximum= max(sum,maximum);
                

            }
            
        }
        if(maximum<0){
            return size_str;
        }
        else{
            return maximum+1;
        }
        
    }
};