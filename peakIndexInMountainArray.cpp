class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /*
        ***  Time Complexity : O(N)     ->    Linear Search   ***
        int ans = 0;
        for(int i = 1; i < arr.size() - 1; i++) {
            if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                ans = i;
            }
        }
        return ans;
        */
/*
        ***  Time Complexity : O(logN)     ->   Binary Search   ***
*/
        int left = 0;
        int right = arr.size() - 1;
        while(left < right) {
            int mid = left + (right-left) / 2;
            if(arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
                return mid;
            } else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
                left = mid;
            } else {
                right = mid;
            }
        }
        return -1;
    }
};