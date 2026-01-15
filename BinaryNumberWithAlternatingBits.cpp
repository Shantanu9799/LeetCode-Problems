class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prevDigit = -1;
        while(n != 0) {
            int currDigit = n & 1;
            if(prevDigit != -1 && prevDigit == currDigit) return false;
            prevDigit = currDigit;
            n >>= 1;
        }
        return true;
    }
};
