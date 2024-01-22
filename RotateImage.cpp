class Solution {
public:

    vector<vector<int>> transpose(vector<vector<int>> matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> result(col, vector<int>(row, 0));
        
        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                result[i][j] = matrix[j][i];
            }
        }
        
        return result;
    }

    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        matrix = transpose(matrix);
        for(int i = 0; i < row; i++) {
            int j = 0, k = col - 1;
            while(j < k) {
                swap(matrix[i][j], matrix[i][k]);
                j++; k--;
            }
        }
    }
};
