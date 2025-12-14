class Solution {
public:

    bool can_we_place(const vector<int>& position, int m, int distance) {
        int total_balls = 1;
        int last_ball_position = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last_ball_position >= distance) {
                total_balls++;
                last_ball_position = position[i]; 
            }
        }
        return total_balls >= m;
    }


    int maximum_of_minimum(vector<int> position , int m ){
        int left=1;
        int right= position[(position.size())-1]-position[0];
        int mid;
        while(left<=right){
            int mid=(left+right)/2;
            bool value= can_we_place(position,m,mid);
            if(value==true){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return right;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        return maximum_of_minimum(position,m);

    }
};