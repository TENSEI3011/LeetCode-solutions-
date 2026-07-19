class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0, curr = 0;
        for (int num : nums) {
            int temp = max(curr, prev + num);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna