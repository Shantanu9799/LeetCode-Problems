class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res;
        int count = 0;
        // Traverse from end, ignore dashes, uppercase letters, group by k
        for (int i = s.size() - 1; i >= 0; --i) {
            char c = s[i];
            if (c == '-') continue;
            // Convert to uppercase if it's a letter
            c = toupper(c);
            res.push_back(c);
            count++;
            // Insert dash after every k characters (except if we're at the end)
            if (count == k) {
                res.push_back('-');
                count = 0;
            }
        }
        // If we added a trailing dash, remove it
        if (!res.empty() && res.back() == '-') res.pop_back();
        // Reverse to correct the order
        reverse(res.begin(), res.end());
        return res;
    }
};
