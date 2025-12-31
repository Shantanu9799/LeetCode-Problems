class Solution {
public:
    int titleToNumber(string columnTitle) {
        int colNumber = 0;
        for(int i = 0; i < columnTitle.size(); ++i) {
            int d = columnTitle[i] - 'A' + 1;
            colNumber = (colNumber * 26) + d;
        }
        return colNumber;
    }
};
