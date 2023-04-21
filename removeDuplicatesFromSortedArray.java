class Solution {
    public int removeDuplicates(int[] nums) {
        int cnt = 1;
        int j = 1;
        for(int i=1; i<nums.length; i++) {
            int ele = nums[i];
            if(ele != nums[i-1]) {
                cnt++;
                nums[j++] = nums[i];
            }
        }
        return cnt;
    }
}
