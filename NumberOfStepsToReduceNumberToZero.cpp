class Solution {
public:

/*
    // Recursion Solution
    int countStep(int num, int cnt) {
        if(num == 0) return cnt;
        if((num & 1) == 0) return countStep(num/2, cnt+1);
        else return countStep(num-1, cnt+1);
    }
    int numberOfSteps(int num) {
        return countStep(num, 0);
    }
*/
    // Iterative Solution
    int numberOfSteps(int num) {
        int cnt = 0;
        while(num != 0) {
            if((num & 1) == 0) num /= 2;
            else num--;
            cnt++;
        }
        return cnt;
    }
};