class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini= INT_MAX;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
            mini= min(mini,sum);

        }
        if(1-mini<1){
            return 1;
        }
        return 1-mini;
        
    }
};