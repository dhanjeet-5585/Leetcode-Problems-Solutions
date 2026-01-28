class Solution {
public:
    vector<vector<int>> subsequences(vector<vector<int>> &vec,vector<int> &nums,int index, vector<int> &curr){
        if(index>= nums.size()){
            vec.push_back(curr);
            return vec;
            
        }
        curr.push_back(nums[index]);
        subsequences(vec,nums,index+1,curr);
        curr.pop_back();
        subsequences(vec,nums,index+1,curr);
        return vec;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> curr;
        return subsequences(vec,nums,0,curr);
        
    }
};