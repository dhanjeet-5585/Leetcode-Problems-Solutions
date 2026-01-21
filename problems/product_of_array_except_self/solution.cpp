class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left_side;
        left_side.push_back(1);

        vector<int> right_side;
        right_side.push_back(1);
        int left=1;
        int right=1;
        for(int i=1;i<nums.size();i++){
            left*= nums[i-1];
            left_side.push_back(left);

        }
        for(int j=nums.size()-2;j>=0;j--){
            right*= nums[j+1];
            right_side.push_back(right);
        }
        reverse(right_side.begin(),right_side.end());
        vector<int> ans;
        for(int k=0;k<nums.size();k++){
            int ANS= left_side[k]*right_side[k];
            ans.push_back(ANS);
        }
        return ans;
        
    }
};