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
    void preorder(TreeNode* temp, vector<int> &pre){
        if(temp==NULL) return;
        
        pre.push_back(temp->val);
        preorder(temp->left,pre);
        preorder(temp->right,pre);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        preorder(root,pre);
        return pre;
    }
};