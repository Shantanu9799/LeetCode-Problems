class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(int i = 0; i < moves.size(); ++i) {
            char c = moves[i];
            if(c == 'L') x--;
            else if(c == 'R') x++;
            else if(c == 'U') y++;
            else y--;
        }
        return x == 0 && y == 0;
    }
};
