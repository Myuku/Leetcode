#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};



bool hasCycle(ListNode *head) {

    if(head == NULL) {
        return false;  
    }   
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return true;
        }
    }
    return false;
}

int main() {
    ListNode i1 = ListNode(3);
    ListNode i2 = ListNode(2);
    ListNode i3 = ListNode(0);
    ListNode i4 = ListNode(-4);
    
    i1.next = &i2;
    i2.next = &i3;
    i3.next = &i4;
    i4.next = &i2;
    cout << hasCycle(&i1);    
}