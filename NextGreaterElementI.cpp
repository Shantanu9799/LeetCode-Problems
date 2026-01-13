class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // first find the next greater element for all the elements of nums2
        // because num1 is a subset of num2
        // take a stack & a map
        stack<int> st;
        unordered_map<int, int> mpp;
        for(int i = nums2.size()-1; i >= 0; --i) {
            // untill you find the next greater element, pop stack element
            while(!st.empty() && st.top()<nums2[i]) st.pop();
            int nextGrtr = st.empty() ? -1 : st.top();
            mpp[nums2[i]] = nextGrtr;
            st.push(nums2[i]);
        }
        // traverse through all the elements of nums1
        // collect the value from the map and push into resultant array
        vector<int> nextGrtrElem(nums1.size());
        for(int i = 0; i < nums1.size(); ++i) {
            nextGrtrElem[i] = mpp[nums1[i]];
        }
        return nextGrtrElem;
    }
};
