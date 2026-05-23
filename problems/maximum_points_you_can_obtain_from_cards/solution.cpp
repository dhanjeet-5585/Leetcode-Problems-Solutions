class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maximum= 0;
        int left_sum=0;
        int right_sum=0;

        
        int l=0;
        int r=k;
        
        for(int j=n-1; j>=n-k;j--){
            right_sum= right_sum+ cardPoints[j];

        }
        maximum= right_sum;
        
        while(r>0){
            left_sum = left_sum+ cardPoints[l];
            l++;
            right_sum=right_sum- cardPoints[n-r];
            maximum= max(maximum,left_sum+right_sum);
            r--;



        }
        return maximum;


           

        

        
    }
};