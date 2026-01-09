class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_len=0;
        for(int i=0;i<nums.size();i++){
            if(i>max_len){
                return false;
            }
            if(i+nums[i]>=max_len){
                max_len=i+nums[i];
            }


        }
        if(max_len>= nums.size()-1){
            return true;
        }else{
            return false;
        }
        
    }
};