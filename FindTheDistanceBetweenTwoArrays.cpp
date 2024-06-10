class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size(), m = arr2.size(), cnt = 0;
        for(int i = 0; i < n; ++i) {
            int ele = arr1[i];
            bool flag = true;
            for(int j = 0; j < m; ++j) {
                int dis = abs(ele - arr2[j]);
                if(dis <= d) {
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};