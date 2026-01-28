class Solution {
public:
    int magicalString(int n) {
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(2);
        int i=2;
        int val=1;
        int one_count=1;
      
        
        while(vec.size()<n){
            int curr=vec[i];
            while(curr-- && vec.size()<n){
                vec.push_back(val);
                if(val%2!=0){
                    one_count++;
                }
            }
            if(val==1){
                val=2;
            }else if(val==2){
                val=1;
            }
            i++;
            
        }
        return one_count;

        
    }
};