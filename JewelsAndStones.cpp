class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < stones.size(); i++) {
            mpp[stones[i]]++;
        }
        // stones as well as jewels
        int jewelsCount = 0;
        for(int i = 0; i < jewels.size(); i++) {
            if(mpp.find(jewels[i]) != mpp.end()) jewelsCount += mpp[jewels[i]];
        }
        // return the value
        return jewelsCount;
    }
};