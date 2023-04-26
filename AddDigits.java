class Solution {
    public int addDigits(int num) {
        // approach 1
        /*
         * int sum = 0;
         * while(num > 0) {
         * sum += (num%10);
         * num /= 10;
         * }
         * while(sum > 9) {
         * int sumOfSum = 0;
         * while(sum > 0) {
         * sumOfSum += (sum%10);
         * sum /= 10;
         * }
         * sum = sumOfSum;
         * }
         * return sum;
         */

        // approach 2

        if (num == 0)
            return 0;
        else if (num % 9 == 0)
            return 9;
        else
            return num % 9;

        // approach 3
        /*
         * int sum=0;
         * while(num > 0)
         * {
         * sum+=(num%10);
         * num/=10;
         * }
         * if(sum<10)
         * return sum;
         * else
         * return addDigits(sum);
         */
    }
}