class Solution {
public:
    bool isHappy(int n) {
        // set for stroing all upcoming integers
        set<int> s;
        while(true) {
            long long sum = 0;
            // loop through all the number, square it and add it
            while(n != 0) {
                int digit = n % 10;
                sum += pow(digit, 2);
                n /= 10;
            }
            n = sum;
            // if sum comes 1, return true;
            if(n == 1) return true;
            // if the same number appears then return false;
            auto it = s.find(n);
            if(it != s.end()) return false;
            s.insert(n);
        }
    }
};
