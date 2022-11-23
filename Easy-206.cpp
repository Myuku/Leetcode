#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) {
        return head;
    } else {
        ListNode* temp = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return temp;
    }
}

main() {
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* node1 = new ListNode(1, node2);

    ListNode* head = node1;
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    } cout<<endl;
    head = reverseList(node1);
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    } cout<<endl;
    
}