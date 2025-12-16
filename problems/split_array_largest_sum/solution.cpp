class Solution {
public:
    bool is_it_possible(vector<int> &nums, int mid, int k){
        int curr_sum = 0;
        int total_subarrays = 1;
        
        for(int i = 0; i < nums.size(); i++){
            if(curr_sum + nums[i] > mid){
                total_subarrays++;
                curr_sum = nums[i];
            } else {
                curr_sum += nums[i];
            }
        }
        return total_subarrays <= k; 
    }

    int solve(vector<int> &nums, int low, int high, int k){
        int ans = high;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(is_it_possible(nums, mid, k)){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    int splitArray(vector<int>& nums, int k) {
        int max_val = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            sum += nums[i];
            max_val = max(max_val,nums[i]);
        }
        return solve(nums,max_val,sum,k);
        
    }
};