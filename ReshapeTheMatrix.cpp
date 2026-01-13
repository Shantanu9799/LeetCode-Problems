class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> newMat(r, vector<int>(c));
        int m = mat.size(), n = mat[0].size(), row = 0, col = 0;
        if(m*n != r*c) return mat;
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                newMat[row][col] = mat[i][j];
                col++;
                if(col == c) {
                    row++;
                    col = 0;
                }
            }
        }
        return newMat;
    }
};
