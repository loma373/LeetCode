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
    
    ListNode* rev(ListNode* temp){
        if(temp==NULL)
            return NULL;
        
        ListNode* prev=NULL;
        ListNode* curr=temp;
        
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL and fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode* temp=slow->next;
        slow->next=NULL;
        
        ListNode* revh=rev(temp);
        
        while(head!=NULL and revh!=NULL){
            if(head->val!=revh->val)
                return false;
            
            head=head->next;
            revh=revh->next;
        }
        
        return true;
    }
};