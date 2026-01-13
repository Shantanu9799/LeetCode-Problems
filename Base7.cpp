class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string base7 = "";
        int tmp = num < 0 ? num * -1 : num;
        while(tmp > 0) {
            int rem = tmp % 7;
            base7 += (rem + '0');
            tmp /= 7;
        }
        if(num < 0) base7 += "-";
        reverse(base7.begin(), base7.end());
        return base7;
    }
};
