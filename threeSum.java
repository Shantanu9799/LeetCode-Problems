class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> list = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i+1;
            int k = n-1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum > 0) {
                    k--;
                } else if(sum < 0) {
                    j++;
                } else {
                    List<Integer> tmp = new ArrayList<>();
                    tmp.add(nums[i]);
                    tmp.add(nums[j]);
                    tmp.add(nums[k]);
                    list.add(tmp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) {
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]) {
                        k--;
                    }
                }

            }

        }
        return list;
    }
}