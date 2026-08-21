class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 1; i < n; i++) {
            string next;
            int len = res.size();
            for (int j = 0; j < len; ) {
                int k = j;
                while (k < len && res[k] == res[j]) k++;
                next += to_string(k - j) + res[j];
                j = k;
            }
            res = next;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna