// Approach - 1
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        // storing index of every list1 elements
        unordered_map<string, int> mppIndex;
        for(int i = 0; i < list1.size(); ++i) {
            mppIndex[list1[i]] = i;
        }
        // traverse though list2, find the smallest Sum and create a resultant array from that
        vector<string> result;
        int minSum = INT_MAX;
        for(int i = 0; i < list2.size(); ++i) {
            // if i is greater than minSum, it's obvious that next addition not gonna help to find the answer
            if(i > minSum) break;
            string str = list2[i];
            auto it = mppIndex.find(str);
            if(it != mppIndex.end()) {
                int sum = it -> second + i;
                // if sum is less than the minSum, clear the resultant array till now, put the new element
                if(sum < minSum) {
                    minSum = sum;
                    result.clear();
                    result.push_back(str);
                } else if(sum == minSum) {
                    result.push_back(str);
                }
            }
        }
        return result;
    }
};

// Appraoch - 2
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        // storing index of every list1 elements
        unordered_map<string, int> mppIndex;
        for(int i = 0; i < list1.size(); ++i) {
            mppIndex[list1[i]] = i;
        }
        // another array to store difference with all the strings
        unordered_map<int, vector<string>> mppIndexSum;
        for(int i = 0; i < list2.size(); ++i) {
            string str = list2[i];
            if(mppIndex.find(str) != mppIndex.end()) {
                int indexSum = mppIndex[str] + i;
                mppIndexSum[indexSum].push_back(str);
            }
        }
        int minIndexSum = INT_MAX;
        for(auto it : mppIndexSum) {
            minIndexSum = min(minIndexSum, it.first);
        }
        return mppIndexSum[minIndexSum];
    }
};
