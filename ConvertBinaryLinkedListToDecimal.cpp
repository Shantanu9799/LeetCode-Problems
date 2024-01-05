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

    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode* nextHead = reverseList(head -> next);
        head -> next -> next = head ;
        head -> next = nullptr;
        return nextHead;
    }

    int getDecimalValue(ListNode* head) {
        int num = 0, p = 0;
        ListNode* currHead = reverseList(head);
        while(currHead != nullptr) {
            num += (((int) pow(2, p)) * currHead -> val);
            p++;
            currHead = currHead->next; 
        }

        return num;
    }
};
