class Solution {
public:
    string convertToString(const vector<char>& chars) {
        return string(chars.begin(), chars.end());
    }

    string restoreString(string s, vector<int>& indices) {
        vector<char> charVector(s.size(), ' ');  // Initialize to a default character

        for (int i = 0; i < indices.size(); i++) {
            charVector[indices[i]] = s[i];
        }

        return convertToString(charVector);
    }
};
