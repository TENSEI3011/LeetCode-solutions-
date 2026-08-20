class Solution {
public:
    bool dfs(vector<vector<char>>& b, string& w, int r, int c, int i) {
        if (i == w.size()) return true;

        if (r < 0 || c < 0 || r >= b.size() || c >= b[0].size() ||
            b[r][c] != w[i])
            return false;

        char ch = b[r][c];
        b[r][c] = '#';

        bool ans = dfs(b,w,r+1,c,i+1) ||
                   dfs(b,w,r-1,c,i+1) ||
                   dfs(b,w,r,c+1,i+1) ||
                   dfs(b,w,r,c-1,i+1);

        b[r][c] = ch;
        return ans;
    }

    bool exist(vector<vector<char>>& b, string w) {
        for (int r = 0; r < b.size(); r++)
            for (int c = 0; c < b[0].size(); c++)
                if (dfs(b,w,r,c,0)) return true;

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna