class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        while(j<=nums.size()-1 && nums[j]!=0){
            j++;
        }
        if(j<=nums.size()-1){
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]!=0){
                    swap(nums[j],nums[i]);
                    j++;
                }
            }

        }

        

        
    }
};