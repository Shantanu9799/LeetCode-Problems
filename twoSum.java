class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] ans = new int[2];
        for(int i=0; i<nums.length; i++) {
            int remain = target - nums[i];
            if(map.containsKey(remain)) {
                ans[0] = map.get(remain);
                ans[1] = i;
                break;
            } else {
                map.put(nums[i], i);
            }
        }

        return ans;



        // Approach 2 // only if we need to return the digit only
        /*
        Arrays.sort(nums);
        int[] arr = new int[2];
        int i = 0;
        int j = nums.length-1;

        while(i < j) {
            int sum = nums[i]+nums[j];
            if(target > sum) {
                i++;
            } else if(target < sum) {
                j--;
            } else {
                arr[0] = nums[i];
                arr[1] = nums[j];
                break;
            }
        }
        return arr;
        */
    }
}