class Solution {
    public int removeElement(int[] nums, int val) {
        /* 
        //better approach       TC - O(n) SC - O(n)
        int n = nums.length;
        ArrayList<Integer> list = new ArrayList<>();
        for(int i : nums) {
            if(i != val)
                list.add(i);
        }
        for(int i=0; i<list.size(); i++) {
            nums[i] = list.get(i);
        }
        return list.size();
        */

        //optimal approach      TC - O(n) SC - O(1)
        int j = 0;
        int cnt = 0;
        for(int i=0; i<nums.length; i++) {
            if(nums[i] != val) {
                nums[j++] = nums[i];
            } else {
                cnt++; 
            }
        }
        return nums.length-cnt;
    }
}
