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
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return "";
        
        string Lstr=tree2str(root->left);
        string Rstr=tree2str(root->right);
        
        string currStr=to_string(root->val);
        
        if(Lstr.size()==0 and Rstr.size()==0)
            return currStr;
        
        currStr+='('+Lstr+')';
        
        if(Rstr.size()!=0){
            currStr+='('+Rstr+')';
        }
        
        return currStr;
    }
};