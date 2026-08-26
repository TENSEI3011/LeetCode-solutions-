class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};
        for (char c : s) freq[c]++;

        int length = 0;
        bool hasOdd = false;
        for (int f : freq) {
            length += f / 2 * 2;      
            if (f % 2) hasOdd = true; 
        }
        return length + (hasOdd ? 1 : 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna