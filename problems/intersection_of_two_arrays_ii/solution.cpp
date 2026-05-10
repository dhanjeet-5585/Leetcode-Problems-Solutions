class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        map<int,int> nums1_map;
        // map<int,int> nums2_map;
        for(int i=0;i<nums1.size();i++){
            nums1_map[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(nums1_map[nums2[i]]>0){
                vec.push_back(nums2[i]);
                nums1_map[nums2[i]]--;
            }
        }
        return vec;
     
        
    }
};