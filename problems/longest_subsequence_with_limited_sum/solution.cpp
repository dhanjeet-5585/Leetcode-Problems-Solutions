class Solution {
public:
    int Binary_search(vector<int> & prefix_sum,int target){
        int low=0;
        int high=prefix_sum.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(prefix_sum[mid]<=target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }

    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> prefix_sum;
        prefix_sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix_sum.push_back(prefix_sum[i-1]+nums[i]);
        }
        vector<int> output;
        for(int i=0;i<queries.size();i++){
            int target=queries[i];
            int value=Binary_search(prefix_sum,target);
            output.push_back(value);
        }
        return output;


        
    }
};