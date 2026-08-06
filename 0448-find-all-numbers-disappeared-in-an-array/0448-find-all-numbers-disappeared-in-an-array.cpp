class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Use the array itself as a hash map. For each value x,
        // treat index (x-1) as x's "slot" and mark it as visited by
        // negating the number stored there (if it isn't already negative).
        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1; // the slot this value "belongs" to
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        // Step 2: Any index whose value is still positive means that
        // number (index+1) was never marked — i.e., it never appeared.
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) result.push_back(i + 1);
        }

        // Step 3 (optional): restore the array to its original values
        for (int i = 0; i < n; i++) nums[i] = abs(nums[i]);

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna