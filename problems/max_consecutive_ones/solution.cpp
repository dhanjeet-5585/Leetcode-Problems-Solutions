class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        while(j<=nums.size()-1 && nums[j]!=1){
            j++;
        }
        if(j<=nums.size()-1){
            int maxi= 1;
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]==1){
                    maxi= max(maxi,(i+1-j));
                }else{
                    j=i;
                    j++;
                }

            }
            return maxi;
        }
        else{
            return 0;
        }
        return 0;
        
    }
};