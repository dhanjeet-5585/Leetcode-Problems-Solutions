class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //sort
        sort(nums.begin(),nums.end());
        int freq=1;
        int n=nums.size();
        int  majority_el=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }
            else{
                freq=1; majority_el=nums[i];
            }
                
            
            if(freq>n/2){
                return majority_el;
            }
            
        }
        return majority_el;
            
        
        
    }
};