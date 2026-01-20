class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> all_subarrays;
        const long long MOD = 1e9 + 7LL; 

        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                all_subarrays.push_back(sum);
            }
        }
        sort(all_subarrays.begin(),all_subarrays.end());
        long long result=0;
        for(int i=left-1;i<right;i++){
            result=(result+all_subarrays[i])%MOD;
        }
        result%MOD;
        return result;

        
    }
};