class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            if(mp.find(x) == mp.end()) {
                mp[x] = {1, i, i};   // direct initialization
            } else {
                mp[x][0]++;          // frequency
                mp[x][2] = i;        // update last index
            }
        }

        int maxFreq = 0, minLen = INT_MAX;

        for (auto &p : mp) {
            auto &v = p.second;
            int freq = v[0];
            int len = v[2] - v[1] + 1;

            if (freq > maxFreq || (freq == maxFreq && len < minLen)) {
                maxFreq = freq;
                minLen = len;
            }
        }
        return minLen;

    }
};
