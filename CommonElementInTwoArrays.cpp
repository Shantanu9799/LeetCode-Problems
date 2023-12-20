class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mpp;
        for(int i : nums1) {
            mpp[i]++;
        }

        int cnt1 = 0;
        for(int it : nums2) {
            auto i = mpp.find(it);
            if(i != mpp.end()) cnt1++;
        }

        mpp.clear();

        for(int i : nums2) {
            mpp[i]++;
        }

        int cnt2 = 0;
        for(int it : nums1) {
            auto i = mpp.find(it);
            if(i != mpp.end()) cnt2++;
        }
        
        return {cnt2, cnt1};
    }
};