class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        if(k==0) return 0;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            int r=i;
            int l=i;
            while(prod<k && l>=0){
                prod=prod*nums[l];
                l--;
                
            }
            if(prod<k){
                count= count+(r-l);

            }else{
                count= count+(r-l-1);
            }
            
        }
        return max(count,0);
    }
};