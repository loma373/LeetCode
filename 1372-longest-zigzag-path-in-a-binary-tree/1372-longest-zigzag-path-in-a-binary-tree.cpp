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
    int res=0;
    
    void dfs(TreeNode* node, bool goLeft, int steps){
        if(node==NULL){
            return;
        }
        
        res=max(res,steps);
        if(goLeft){
            dfs(node->left,false,steps+1);
            dfs(node->right,true,1);
        }
        else{
            dfs(node->right,true,steps+1);
            dfs(node->left,false,1);
        }
    }
    
    int longestZigZag(TreeNode* root) {
        dfs(root,true,0);
        dfs(root,false,0);
        
        return res;
    }
};