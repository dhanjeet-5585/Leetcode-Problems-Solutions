class Solution {
public:

    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int total_pairs=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0;
        int j=0;
        while(i<players.size() && j< trainers.size()){
            if(players[i]<= trainers[j]){
                i++;
                j++;
                total_pairs++;
            }else{
                j++;
            }
        }
        return total_pairs;
      
        
    }
};