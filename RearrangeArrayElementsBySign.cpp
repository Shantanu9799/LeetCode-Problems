class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, k = 0;
        vector<int> pos(n/2), neg(n/2), rearranged(n)
;
        for(int it : nums) {
            if(it < 0) neg[j++] = it;
            else pos[i++] = it;
        }
        i = 0, j = 0;
        while(k < n) {
            if((k & 1) == 0) {
                rearranged[k++] = pos[i++];
            } else {
                rearranged[k++] = neg[j++];
            }
        }
        return rearranged;
    }
};