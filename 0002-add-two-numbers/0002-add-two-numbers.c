struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = NULL;
    struct ListNode* current = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry > 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum %= 10;

        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum;
        newNode->next = NULL;

        if (result == NULL) {
            result = newNode;
            current = result;
        } else {
            current->next = newNode;
            current = current->next;
        }
    }

    return result;
}
