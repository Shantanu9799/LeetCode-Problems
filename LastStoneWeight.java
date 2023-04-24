class Solution {
    public int lastStoneWeight(int[] stones) {
        ArrayList<Integer> nums = new ArrayList<>();
        for(int i : stones) {
            nums.add(i);
        }

        while(nums.size() > 1) {
            int maxi = Integer.MIN_VALUE;
            int mIdx = 0;
            int secondMaxi = Integer.MIN_VALUE;
            int sIdx = 0;
            for(int j=0; j<nums.size(); j++) {
                int i = nums.get(j);
                if(i > maxi) {
                    secondMaxi = maxi;
                    sIdx = mIdx;
                    maxi = i;
                    mIdx = j;
                } else if((i <= maxi) && (i > secondMaxi)) {
                    secondMaxi = i;
                    sIdx = j;
                }
            }
            nums.set(mIdx, maxi-secondMaxi);
            nums.remove(sIdx);
        }

        return nums.get(0);
    }
}