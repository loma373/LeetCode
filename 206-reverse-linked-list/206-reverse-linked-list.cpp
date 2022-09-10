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
        ListNode* curr;
        ListNode* forw;
        ListNode* prv;
        curr = head;
        forw = NULL;
        prv = NULL;
        while(curr != NULL){
            forw = curr->next;
            curr->next = prv;
            prv = curr;
            curr = forw;
        }
        return prv;
    }
};