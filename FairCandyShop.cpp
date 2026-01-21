class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        set<int> s;
        // finding sum of both the arrays
        int sumA = 0, sumB = 0;
        for(int i = 0; i < aliceSizes.size(); ++i) 
            sumA += aliceSizes[i];
        for(int i = 0; i < bobSizes.size(); ++i) {
            sumB += bobSizes[i];
            s.insert(bobSizes[i]);
        }
        // traverse through the first array and find the element need is present in the second array or not
        int finalSum = (sumA + sumB) / 2;
        for(int i = 0; i < aliceSizes.size(); ++i) {
            int el = finalSum - sumA + aliceSizes[i];
            if(s.find(el) != s.end()) return {aliceSizes[i], el};
        }
        return {};
    }
};

// finalSUm = sumA+sumB / 2;
// sumA + b[j] - a[i] = finalSum;
// b[j] = finalSum - sumA + a[i]
