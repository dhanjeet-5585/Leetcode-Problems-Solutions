class Solution {
public:
    int find_index(vector<int> & starting, vector<vector<int>> & intervals, int target){
        int low=0;
        int high= intervals.size()-1;
        if(starting[starting.size()-1]<target) return -1;
        while(low<=high){
            long long mid = (low+high)/2;
            if(starting[mid]>target){
                high=mid-1;
            }else if(starting[mid]< target){
                low=mid+1;
            }else{
                return mid;
            }
        }
        return low;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {

        vector<int> starting;
        vector<int> ans;
        for(int i=0;i<intervals.size();i++){
            starting.push_back(intervals[i][0]);
        }
        sort(starting.begin(),starting.end());
        for(int j=0;j< intervals.size();j++){
            int value= find_index(starting,intervals,intervals[j][1]);
            if(value==-1){
                ans.push_back(value);
            }else{
                int find= starting[value];
                for(int k=0;k<intervals.size();k++){
                    if(intervals[k][0]==find){
                        ans.push_back(k);
                    }
                }

            }

        }
        return ans;


        
    }
};