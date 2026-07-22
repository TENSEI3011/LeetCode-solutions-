class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> cnt(37, 0);
        int maxSize = 0, res = 0;
        for (int i = 1; i <= n; i++) {
            int s = 0, x = i;
            while (x) { s += x % 10; x /= 10; }
            cnt[s]++;
            if (cnt[s] > maxSize) { maxSize = cnt[s]; res = 1; }
            else if (cnt[s] == maxSize) res++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna