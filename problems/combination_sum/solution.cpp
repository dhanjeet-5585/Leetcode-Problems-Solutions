class Solution {
public:
    void findCombination(int ind, int target, vector<vector<int>> &ans , vector<int>&arr, vector<int> &ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],ans,arr,ds);
            ds.pop_back();
        }
        findCombination(ind+1,target,ans,arr,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int ind=0;
        findCombination(ind,target,ans,candidates,ds);
        return ans;
        
    }
};