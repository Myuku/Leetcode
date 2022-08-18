#include <iostream>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode *head = new ListNode();
    ListNode *temp = head;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int x = l1 ? l1->val : 0;
        int y = l2 ? l2->val : 0;
        int num = x + y + carry;
        if (num > 9) {
            carry = 1;
            num %= 10;
        } else {
            carry = 0;
        }
        ListNode *newNode = new ListNode(num);
        temp->next = newNode;
        temp = newNode;
        
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    return head->next;
}

