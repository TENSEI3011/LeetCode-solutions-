class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int start = i;
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) i++;
            res.push_back(start == i ? to_string(nums[start])
                                      : to_string(nums[start]) + "->" + to_string(nums[i]));
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna