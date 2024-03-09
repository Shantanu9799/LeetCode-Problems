class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mpp;
        for(auto it : nums1) {
            mpp[it] = 1;
        }
        int count = 0;
        for(auto it : nums2) {
            if(mpp[it] == 1) return it;
        }
        return -1;
    }
};