class Solution {
public:
    int romanToInt(string s) {
        int val['I'+1] = {0};
        // Only setting the ones we need
        int values[256] = {0};
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && values[s[i]] < values[s[i+1]])
                result -= values[s[i]];
            else
                result += values[s[i]];
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna