class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int MOD = 1e9 + 7;
        sort(nums.begin(),nums.end());
        vector<int> powers(nums.size(),1);
        for(int i =1;i<nums.size();i++){
            powers[i]= (powers[i-1]*2)%MOD;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            int low=i;
            int high= nums.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]+nums[i]<=target){
                    low=mid+1;

                }else{
                    high= mid-1;
                }
            }
            if (high >= i) {
                count = (count + powers[high - i]) % MOD;
            }
         
        }
        return count;
        
    }
};