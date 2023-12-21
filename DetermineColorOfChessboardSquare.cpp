class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return ((((coordinates[0] - 'a') & 1) == 0 && (coordinates[1] & 1) == 0) || ((coordinates[0] - 'a') & 1) == 1 && (coordinates[1] & 1) == 1);
    }
};