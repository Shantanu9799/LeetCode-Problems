class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n = skills.size();

    // Early exit if k is larger than or equal to the number of players
    if (k >= n) {
        return max_element(skills.begin(), skills.end()) - skills.begin();
    }

    queue<int> q;
    for (int i = 0; i < n; ++i) {
        q.push(i);
    }
    
    int current_winner = q.front();
    q.pop();
    int consecutive_wins = 0;
    
    while (consecutive_wins < k) {
        int challenger = q.front();
        q.pop();
        
        if (skills[current_winner] > skills[challenger]) {
            // Current winner wins
            q.push(challenger);
            ++consecutive_wins;
        } else {
            // Challenger wins
            q.push(current_winner);
            current_winner = challenger;
            consecutive_wins = 1;
        }
    }
    
    return current_winner;
}
};