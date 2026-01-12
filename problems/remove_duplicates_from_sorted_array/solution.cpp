class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right=1;
        vector<int> vec;
        int k= nums.size();
        if(nums.size()==1){
            return k;
        }
        while(right<=nums.size()-1){
            if(nums[right]==nums[left]){
                vec.push_back(right);
                right++;
                k--;

            }else if(nums[right]!=nums[left]){
                left=right;
                right++;

            }

        }
        for (int i = vec.size() - 1; i >= 0; i--) {
            nums.erase(nums.begin() + vec[i]);
        }
        return k;

        
    }
};
