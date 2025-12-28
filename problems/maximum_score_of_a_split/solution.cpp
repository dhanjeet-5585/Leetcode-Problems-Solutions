class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        
        
        vector<long long> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min((long long)nums[i], suffixMin[i + 1]);
        }
        
        
        long long prefixSum = 0;
        long long ans = LLONG_MIN;
        
        for (int i = 0; i < n - 1; i++) {
            prefixSum += nums[i];
            long long score = prefixSum - suffixMin[i + 1];
            ans = max(ans, score);
        }
        
        return ans;
        
    }
};