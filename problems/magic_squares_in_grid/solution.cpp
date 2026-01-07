class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& mat) {
        unordered_set<int> s;

        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (mat[i][j] < 1 || mat[i][j] > 9)
                    return false;
                s.insert(mat[i][j]);
            }
        }

        if (s.size() != 9) return false;

        int sum = mat[0][0] + mat[0][1] + mat[0][2];

        
        for (int i = 0; i < 3; i++) {
            if (mat[i][0] + mat[i][1] + mat[i][2] != sum)
                return false;
        }

        for (int j = 0; j < 3; j++) {
            if (mat[0][j] + mat[1][j] + mat[2][j] != sum)
                return false;
        }

       
        if (mat[0][0] + mat[1][1] + mat[2][2] != sum)
            return false;

        if (mat[0][2] + mat[1][1] + mat[2][0] != sum)
            return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int magicCount = 0;

        
        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {

                vector<vector<int>> sub(3, vector<int>(3));

                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 3; c++) {
                        sub[r][c] = grid[i + r][j + c];
                    }
                }

                if (isMagicSquare(sub)) {
                    magicCount++;
                }
            }
        }

        return magicCount;
    }
};
