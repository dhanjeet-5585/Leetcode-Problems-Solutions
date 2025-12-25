class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int total_sum=0;
        int sum=0;
        for(int i=0;i<k;i++){
            total_sum+= cardPoints[i];
            sum++;
        }
        int maxi= total_sum;
        int curr= cardPoints.size()-1;
        while(sum>0){
            total_sum-= cardPoints[sum-1];
            total_sum+= cardPoints[curr];
            curr--;
            maxi=max(maxi,total_sum);
            sum--;
            

        }
        return maxi;
        
    }
};