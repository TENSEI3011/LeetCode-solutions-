class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string clean;
        for (char c : s) {
            if (c != '-') clean += toupper(c);
        }

        int firstGroupLen = clean.size() % k;
        if (firstGroupLen == 0) firstGroupLen = k;

        string result;
        int i = 0;
        while (i < (int)clean.size()) {
            if (i > 0) result += '-';
            int len = (i == 0) ? firstGroupLen : k;
            result += clean.substr(i, len);
            i += len;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna