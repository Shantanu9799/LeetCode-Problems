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
    ListNode* removeElements(ListNode* head, int val) {
        // create a dummy node and point to head
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;

        ListNode* curr = dummy;
        while(curr -> next) {
            // check if the value of the  next of the dummy node is equal to val to remove
            if(curr -> next -> val == val) curr -> next = curr -> next -> next;
            // if not then move the curr pointer
            else curr = curr -> next;
        }
        // return current head
        return dummy -> next;
    }
};
