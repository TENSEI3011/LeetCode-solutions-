class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        stringstream ss(s);
        string word;
        int i = 0;

        for (; ss >> word; i++) {
            if (i >= pattern.size()) return false;
            char c = pattern[i];

            if (charToWord.count(c) && charToWord[c] != word) return false;
            if (wordToChar.count(word) && wordToChar[word] != c) return false;

            charToWord[c] = word;
            wordToChar[word] = c;
        }

        return i == pattern.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna