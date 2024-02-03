class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for(int i = 0; i < indices.size(); i++) {
            int ri = indices[i][0], ci = indices[i][1];
            for(int j = 0; j < m; j++) {
                matrix[j][ci]++;
            }
            for(int j = 0; j < n; j++) {
                matrix[ri][j]++;
            }
        }
        int oddValuedIndex = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if((matrix[i][j] & 1) == 1) oddValuedIndex++;
            }
        }
        return oddValuedIndex;
    }
};