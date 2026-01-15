


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        int i = 0;
        
        while (i < nums.size() - 1) {

            if (nums[i] == nums[i+1]) {
                int val = nums[i];
   
                while (i < nums.size() && nums[i] == val) {
                    nums.erase(nums.begin() + i);
                }
            } else {
                i++;
            }
        }

        if (!nums.empty()) return nums[0];

        return -1; 
    }
};
