class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> vec(matrix.size(),vector<int>(matrix.size(), 0));
        for(int i=0;i<matrix.size();i++){
            int j= matrix[0].size()-i-1;
            for(int h=0;h<matrix.size();h++){
                vec[h][j]= matrix[i][h];

            }
        }
        matrix=vec;
        
    }
};