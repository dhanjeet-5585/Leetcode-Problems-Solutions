class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int subsets= 1<<nums.size();
        vector<vector<int>> answers;
        for(int j=0;j<subsets;j++){
            vector<int> vec;
            for(int i=0;i<nums.size();i++){
                if(j&(1<<i)){
                    vec.push_back(nums[i]);
                }
            }
            answers.push_back(vec);

        }
        return answers;

        
    }
};