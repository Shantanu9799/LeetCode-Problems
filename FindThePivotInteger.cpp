class Solution {
public:
    int pivotInteger(int n) {
        
        int totalSum = (n * (n+1)) / 2;

        int s = 1, e = n;
        while(s <= e) {
            int x = s + (e-s)/2;
            int prefixSum = (x * (x+1)) / 2;
            if(prefixSum == (totalSum - prefixSum + x)) return x;
            else if(prefixSum < (totalSum - prefixSum + x)) s = x + 1;
            else e = x - 1;
        }

        return -1;

    }
};