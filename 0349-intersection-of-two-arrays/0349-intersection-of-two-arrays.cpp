class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Put all of nums1's elements into a hash set — O(1) lookups,
        // duplicates automatically collapse
        unordered_set<int> set1(nums1.begin(), nums1.end());

        // Step 2: Scan nums2; any element also present in set1 is part of
        // the intersection. Using a set here too avoids duplicate outputs.
        unordered_set<int> resultSet;
        for (int x : nums2) {
            if (set1.count(x)) resultSet.insert(x);
        }

        // Step 3: Convert the result set into the output vector
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna