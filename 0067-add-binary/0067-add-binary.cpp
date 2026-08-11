class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            result += (sum % 2) + '0';
            carry = sum / 2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna