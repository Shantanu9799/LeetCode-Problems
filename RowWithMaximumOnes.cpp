class Solution {
public:

    int OneCount(vector<int> m) {
        int count = 0;
        for(int i = 0; i < m.size(); i++) {
            if(m[i] == 1) count++;
        }
        return count;
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount = 0;
        int rowNumber = 0;
        for(int i = 0; i < mat.size(); i++) {
            int count = OneCount(mat[i]);
            if(maxCount < count) {
                maxCount = count;
                rowNumber = i;
            }
        }
        return {rowNumber, maxCount};
    }
};