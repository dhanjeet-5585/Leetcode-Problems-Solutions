class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int currsum=0;
        for(int val:nums){
            currsum+=val;
            max_sum=max(currsum,max_sum);
            if(currsum<0){
                currsum=0;
            }
        }
        return max_sum;
        
    }
};