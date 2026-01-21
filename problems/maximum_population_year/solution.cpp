class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<pair<int,int>> vec;
        for(int i=0;i<logs.size();i++){
            int total_population = 0;
            for(int j=0; j<logs.size(); j++){
                if(logs[j][0] <= logs[i][0] && logs[j][1] > logs[i][0]){
                    total_population++;
                }
            }
            vec.push_back({total_population, logs[i][0]});
        }


        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });

        return vec[0].second;
    }
};
