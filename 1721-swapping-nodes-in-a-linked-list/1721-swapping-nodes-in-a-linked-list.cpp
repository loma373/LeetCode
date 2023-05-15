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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        int n=arr.size();
        int temp=arr[k-1];
        arr[k-1]=arr[n-k];
        arr[n-k]=temp;
        
        ListNode* res=new ListNode(arr[0]);
        ListNode* ans=res;
        for(int i=1;i<n;i++){
            ListNode* curr=new ListNode(arr[i]);
            res->next=curr;
            res=res->next;
        }
        
        return ans;
    }
};