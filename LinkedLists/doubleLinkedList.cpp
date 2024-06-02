#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* revreseLinkedList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;

        ListNode* last = revreseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;

        return last;
    }
        
    ListNode* doubleIt(ListNode* head) {

        head = revreseLinkedList(head);

        ListNode* cur = head;
        ListNode* prev = NULL;

        int carry = 0;

        while(cur != NULL) {
            int newVal = cur->val * 2 + carry;
            cur->val = newVal%10;

            if(newVal >= 10) {
                carry = 1;
            }   else {
                carry = 0;
            }

            prev = cur;
            cur = cur->next;
        }
        if(carry != 0) {
            ListNode* newHead = new ListNode(carry);
            prev->next = newHead;
        }

        return revreseLinkedList(head);
    }
};
int main()
{
    return 0;
}