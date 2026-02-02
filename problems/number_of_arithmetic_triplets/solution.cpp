class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int count = 0;

        for (int num : nums) {
            if (seen.count(num + diff) && seen.count(num + 2 * diff)) {
                count++;
            }
        }

        return count;
    }
};
