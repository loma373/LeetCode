/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* res=NULL;
        bool flag=false;
        
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                flag=true;
                fast=head;
                break;
            }
        }
        
        if(flag==false)
            return res;
        else{
            while(true){
                if(slow==fast){
                    res=slow;
                    break;
                }
                
                slow=slow->next;
                fast=fast->next;
            }
        }
        
        return res;
    }
};