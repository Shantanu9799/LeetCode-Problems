class Solution {
public:
    int hammingDistance(int x, int y) {
        int pos = 0;
        while(x != 0 || y != 0) {
            int d1 = x & 1;
            int d2 = y & 1;
            if(d1 != d2) {
                pos++;
            }
            x >>= 1;
            y >>= 1;
        }
        return pos;
    }
};
