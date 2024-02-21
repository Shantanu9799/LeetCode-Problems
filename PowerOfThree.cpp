class Solution {
public:

    bool powerHelper(int n) {
        if(n == 1) return true;
        if(n <= 0 || n%3!=0) return false; 
        return powerHelper(n / 3);
    }

    bool isPowerOfThree(int n) {
        return powerHelper(n);
    }

    /*
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n != 1) {
            if(n%3 != 0) return false;
            n /= 3;
        }
        return true;
    }
    */
};