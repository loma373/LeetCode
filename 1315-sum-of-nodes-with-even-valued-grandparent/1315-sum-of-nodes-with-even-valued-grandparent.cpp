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
    int sum=0;
    void dfs(TreeNode* node){
        if(node==NULL)
            return;
        
        
        if(node->val%2==0){
            if(node->left!=NULL and node->left->left!=NULL)
                sum+=node->left->left->val;
            if(node->left!=NULL and node->left->right!=NULL)
                sum+=node->left->right->val;
            if(node->right!=NULL and node->right->right!=NULL)
                sum+=node->right->right->val;
            if(node->right!=NULL and node->right->left!=NULL)
                sum+=node->right->left->val;
        }
        dfs(node->left);
        
        dfs(node->right);
        
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root);
        
        return sum;
    }
};