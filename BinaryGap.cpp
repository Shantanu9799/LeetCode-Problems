class Solution {
public:
    int binaryGap(int n) {
        int lastPos = -1, maxDist = 0, pos = 1;
        while(n > 0) {
            int d = n & 1;
            if(d == 1) {
                if(lastPos == -1) lastPos = pos;
                else {
                    int dist = pos - lastPos;
                    maxDist = max(maxDist, dist);
                    lastPos = pos;
                }
            }
            pos++;
            n >>= 1;
        }
        return maxDist;
    }
};
