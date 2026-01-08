class Solution {
public:
    int countSegments(string s) {
        if(s == "") return 0;
        int cnt = 0;
        stringstream ss(s);
        string segment;
        while(ss >> segment) cnt++;
        return cnt;
    }
};
