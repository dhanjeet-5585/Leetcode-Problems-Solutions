class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> vec;
        vector<string> answer(score.size());
        for(int i=0;i<score.size();i++){
            vec.push_back(make_pair(score[i],i));
           
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        for(int j=0;j<score.size();j++){
            if(j==0){
                answer[vec[j].second]="Gold Medal";
            }else if(j==1){
                answer[vec[j].second]="Silver Medal";
            }else if(j==2){
                answer[vec[j].second]="Bronze Medal";
            }else{
                answer[vec[j].second]=to_string(j+1);
            }
        }
        return answer;
        
    }
};