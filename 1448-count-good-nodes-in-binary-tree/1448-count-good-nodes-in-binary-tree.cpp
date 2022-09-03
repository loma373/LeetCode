/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res;
    
    void preorder(TreeNode* node,int maxi){
        if(!node)
            return;
        
        if(node->val>=maxi){
            res++;
            maxi=node->val;
        }
        
        preorder(node->left,maxi);
        preorder(node->right,maxi);
    }
    
    int goodNodes(TreeNode* root) {
        preorder(root,INT_MIN);
        return res;
    }
};