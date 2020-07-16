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

 // Solution 1
 // Using iteration
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = NULL;
        ListNode* current = head;
        while (current != NULL) {
            ListNode* temp = current -> next;
            current -> next = previous;
            previous = current;
            current = temp;
        }
        return previous;
    }
};

// Solution 2
// Using stack to reverse the linked list.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        stack <ListNode*> stk;
        while (head) {
            stk.push(head);
            head = head -> next;
        }
        head = stk.top();
        ListNode* ptr = head;
        while (!stk.empty()) {
            ptr -> next = stk.top();
            stk.pop();
            ptr = ptr -> next;
        }
        ptr -> next = NULL;
        return head;
    }
};
