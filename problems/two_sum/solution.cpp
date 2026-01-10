class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vec;
        for(int i=0;i< nums.size();i++){
            vec.push_back({nums[i],i});
        }
        int first=0;
        int second = nums.size()-1;
        sort(vec.begin(),vec.end());
        while(first< second){
            int sum= vec[first].first + vec[second].first;
            if(sum==target){
                return {vec[first].second,vec[second].second};
            }else if(sum>target){
                second--;
            }else{
                first++;
            }
        }
        return {};
 
    }
};
