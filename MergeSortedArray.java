class Solution {
    public void merge(int[] arr1, int m, int[] arr2, int n) {
        int[] ans = new int[n+m];
        int k = 0;
        int i = 0; 
        int j = 0;
        while(j<n && i<m) {
            if(arr1[i] < arr2[j]) {
                ans[k++] = arr1[i];
                i++;
            } else {
                ans[k++] = arr2[j];
                j++;
            }
        }
        while(i < m) {
            ans[k++] = arr1[i];
            i++;
        }
        while(j < n) {
            ans[k++] = arr2[j];
            j++;
        }
        for(i=0; i<m+n; i++) {
            arr1[i] = ans[i];
        }
    }
}