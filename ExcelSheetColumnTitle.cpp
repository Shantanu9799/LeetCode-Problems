class Solution {
public:
    string convertToTitle(int columnNumber) {
        string colTitle = "";
        while(columnNumber > 0) {
            int rem = (columnNumber - 1) % 26;
            colTitle += ('A' + rem);
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(colTitle.begin(), colTitle.end());
        return colTitle;
    }
};
