class Solution {
public:
    void sortColors(vector<int>& nums) {
    int length = nums.size();

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);  
            }
        }
    }

    cout << '[';
    for (int y = 0; y < nums.size(); y++) {
        cout << nums[y];
        if (y != nums.size() - 1) cout << ',';
    }
    cout << ']' << endl;
}

};