class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        for (auto& w : words) {
            string sorted_w = w;
            sort(sorted_w.begin(), sorted_w.end());
            if (!res.empty()) {
                string prevSorted = res.back();
                sort(prevSorted.begin(), prevSorted.end());
                if (prevSorted == sorted_w) continue;
            }
            res.push_back(w);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna