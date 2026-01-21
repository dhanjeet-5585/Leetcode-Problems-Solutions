class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum=0;
        for(int i=1;i<nums.size();i++){
            right_sum+= nums[i];
        }
        if(right_sum==0) return 0;
        int left_sum=0;
        for(int j=1;j<nums.size();j++){
            left_sum+= nums[j-1];
            right_sum-=nums[j];
            if(left_sum==right_sum) return j;

        }
        if(left_sum==0) return nums.size()-1;
        return -1;
        
    }
};