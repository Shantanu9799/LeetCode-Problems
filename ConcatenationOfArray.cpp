class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> tmp = nums;
        for(int it : nums) {
            tmp.push_back(it);
        }
        return tmp;
    }
};