class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // ordered map for storing frequency in ascending order
        map<int, int> mpp;
        for(auto it : arr1) {
            mpp[it]++;
        }
        // putting all the value occured in arr2
        // respect to relative postion
        int idx = 0;
        for(int it : arr2) {
            int occur = mpp[it];
            while(occur--) arr1[idx++] = it;
            mpp.erase(it);
        }
        // putting those element which doesn't appear
        // in arr2
        for(auto it = mpp.begin(); it != mpp.end(); ++it) {
            int occur = it -> second;
            while(occur--) arr1[idx++] = it -> first;
        }
        return arr1;
    }
};