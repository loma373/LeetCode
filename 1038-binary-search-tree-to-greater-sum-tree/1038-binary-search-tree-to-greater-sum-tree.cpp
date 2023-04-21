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
    
    void solve(TreeNode* node){
        if(node!=NULL){
            solve(node->right);
            node->val+=sum;
            sum=node->val;
            solve(node->left);
        }
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        solve(root);
        
        return root;
    }
};