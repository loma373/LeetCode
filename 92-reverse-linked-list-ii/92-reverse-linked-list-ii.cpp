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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* p = new ListNode(0,head);
        if(right==left)
            return head;
        ListNode* l1 = p;
        int i=1;
        while(l1)
        {
            if(i>=left)
                break;
            l1=l1->next;
            i++;
        }
        ListNode* next = l1;
        ListNode* curr = l1->next;
        ListNode* prev = l1;
        while(curr)
        {
            if(i==right+1)
                break;
            next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = next;
            i++;   
        }
        l1->next->next = curr;
        l1->next = prev;
        
        return p->next;
    }
};