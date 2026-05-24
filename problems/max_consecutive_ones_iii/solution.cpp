class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int maximum= 0;
        
        if(k==0){
            int count=0;
            int maxi= 0;
            
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                    count++;
                }else{
                    maxi= max(count,maxi);
                    
                    count=0;
                    
                }
            }
            maxi= max(count,maxi);
            return maxi;
        }
        
        
        while(r< nums.size()){
            if(nums[r]==0 && k > 0){
                k--;
                r++;
            }else if(nums[r]==1){
                r++;
            }else if(nums[r]==0 && k==0){
                maximum= max(maximum, r-l);
                while(nums[l]!=0){
                    l++;
                }
                l++;
                k++;
            }
            maximum= max(maximum, r-l);
        }
        return maximum;
        
    }
};