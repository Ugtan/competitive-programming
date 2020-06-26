// You are given two non-empty linked lists representing two non-negative integers.
// The most significant digit comes first and each of their nodes contain a single digit.
// Add the two numbers and return it as a linked list.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int bias = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;
        ListNode* current = dummy;
        while(l1!= NULL || l2 != NULL)
        {
            int value;
            value = (l1 != NULL)? l1->val:0;
            value = (l2 != NULL)? value + l2->val : 0;
            current->next = new ListNode((value + bias)%10);
            bias = (value+bias)/10;
            current = current-> next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        if (bias > 0)
            current->next = new ListNode(1);
        return head->next;
    }
};

