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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        
        ListNode* temp=head;
        int length=1;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int c=0;
        while(curr!=NULL and c<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }
        
        if(next!=NULL and (length-k)>k){
            head->next=reverseKGroup(next,k);
        }
        else{
            head->next=curr;
        }
        
        return prev;
    }
};