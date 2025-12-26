class Solution {
private:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        row.push_back(1);
        long long element = 1;
        for(int col = 1; col < rowIndex; ++col) {
            element *= (rowIndex - col);
            element /= col;
            row.push_back(element);
        }
        return row;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int rowIndex = 1; rowIndex <= numRows; ++rowIndex) {
            triangle.push_back(getRow(rowIndex));
        }
        return triangle;
    }
};
