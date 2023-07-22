#include<bits/stdc++.h>
#include<math.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int i = 0;
        int j = height.size()-1;
        while(i < j) {
            int hght = min(height[i], height[j]);
            int contain = hght * (j - i);
            maxWater = max(maxWater, contain);
            if(height[i] < height[j]){
                i++;
            } else {
                j--;
            }
        }
        return maxWater;
    }
};