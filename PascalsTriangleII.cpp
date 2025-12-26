class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        row.push_back(1);
        long long element = 1;
        for(int col = 1; col <= rowIndex; ++col) {
            element *= (rowIndex - col + 1);
            element /= col;
            row.push_back(element);
        }
        return row;
    }
};
