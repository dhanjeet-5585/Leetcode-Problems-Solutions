class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> modified(nums.size(),0);
        int Pos_index=0;
        int neg_index=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                modified[Pos_index]= nums[i];
                Pos_index+=2;

            } 
            else{
                modified[neg_index]= nums[i];
                neg_index+=2;
            }

        }
        return modified;
        
    }
};