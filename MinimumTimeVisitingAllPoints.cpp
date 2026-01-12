class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalTime = 0, n = points.size();
        for(int i = 0; i < n-1; ++i) {
            int maxTime = max(abs(points[i][0]-points[i+1][0]), abs(points[i][1]-points[i+1][1]));
            totalTime += maxTime;
        }
        return totalTime;
    }
};
