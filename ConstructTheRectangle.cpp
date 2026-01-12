class Solution {
public:
    vector<int> constructRectangle(int area) {
        int searchSpace = sqrt(area);
        while(searchSpace >= 1) {
            if(area % searchSpace == 0) {
                int l = area / searchSpace;
                return {l, searchSpace};
            }
            searchSpace--;
        }
        return {1, area};
    }
};
