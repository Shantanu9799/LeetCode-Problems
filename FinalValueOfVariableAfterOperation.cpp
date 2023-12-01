class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int increment = 0, decrement = 0;
        for(string it : operations) {
            if(it=="X++" || it=="++X") increment++;
            else decrement++;
        }
        return increment-decrement;
    }
};