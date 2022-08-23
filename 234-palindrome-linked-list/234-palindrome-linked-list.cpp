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
    ListNode* revlist(ListNode* temp){
        if(temp==NULL) 
            return temp;
        
        ListNode* prev=NULL;
        ListNode* cur=temp;
        
        while(cur!=NULL){
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* temp=slow->next;
        slow->next=NULL;
        
        ListNode* revh=revlist(temp);
        
        while(head!=NULL and revh!=NULL){
            if(head->val!=revh->val)
                return false;
            
            head=head->next;
            revh=revh->next;
        }
        
        return true;
    }
};