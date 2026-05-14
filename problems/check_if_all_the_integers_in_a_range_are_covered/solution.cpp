bool check(int num,vector<vector<int>>& vec){
    for(int i =0; i< vec.size() ; i++){
        if(vec[i][0]<=num && num<= vec[i][1]){
            return true;
        }
    }
    return false;


}

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int total=0;

        for(int i=left ; i<= right ; i++){
            
            bool val= check(i, ranges);
            if (val) total++;
            
        }
        if(total== (right-left)+1) return true;

        return false;
        
    }
};