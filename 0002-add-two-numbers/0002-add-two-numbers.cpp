class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* last = nullptr;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = 0;
            if (l1 != nullptr) digit1 = l1->val;

            int digit2 = 0;
            if (l2 != nullptr) digit2 = l2->val;

            int sum = digit1 + digit2 + carry;
            int newDigit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(newDigit);

            if (head == nullptr) {
                head = newNode;
                last = newNode;
            } else {
                last->next = newNode;
                last = newNode;
            }

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna