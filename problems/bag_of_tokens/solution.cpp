class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int size= tokens.size();
        int left=0;
        int right= size-1;
        int score=0;
        int max_score= 0;
        while(left<=right){
            if(power>=tokens[left]){
                power-=tokens[left];
                left++;
                score++;
                max_score= max(score,max_score);

            }else if(score>0){
                power+= tokens[right];
                right--;
                score--;
                
            }else{
                break;
            }
        }
        return max_score;
         
        
    }
};