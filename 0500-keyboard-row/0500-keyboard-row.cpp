class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string rows[3] = {"qwertyuiopQWERTYUIOP", "asdfghjklASDFGHJKL", "zxcvbnmZXCVBNM"};
        int rowOf[128] = {0};
        for (int r = 0; r < 3; r++)
            for (char c : rows[r]) rowOf[c] = r;

        vector<string> result;
        for (string& w : words) {
            int row = rowOf[w[0]];
            bool valid = true;
            for (char c : w) if (rowOf[c] != row) { valid = false; break; }
            if (valid) result.push_back(w);
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna