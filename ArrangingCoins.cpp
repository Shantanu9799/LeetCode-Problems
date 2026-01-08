class Solution {
public:
    int arrangeCoins(int n) {
        int start = 1, end = n;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            long long expectedTotal = ((long long)mid * (long long)(mid + 1)) / 2;
            if(expectedTotal <= n) start = mid + 1;
            else end = mid - 1;
        }
        return end;
    }
};
