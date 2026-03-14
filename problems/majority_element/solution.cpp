class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele= nums[0];
        for(int i=0;i<nums.size();i++){
            if(count==0) ele= nums[i];
            if(nums[i]== ele) count++;
            else if(nums[i]!= ele) count--;
            
        }
        int total=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]== ele) total++;
        }
        if(total > nums.size()/2) return ele;

        return -1;

        
    }
};