class Solution {
    public int strStr(String haystack, String needle) {
        int n = haystack.length();
        int m = needle.length();
        int ans = -1;
        for(int i=0; i<=(n-m); i++) {
            String curString = haystack.substring(i, i+m);
            if(curString.equals(needle)) {
                return i;
            }
        }
        return ans;
    }
}
