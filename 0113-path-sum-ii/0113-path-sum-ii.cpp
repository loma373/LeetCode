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
    void checker(TreeNode* root, int target,vector<vector<int>> &res,vector<int> temp){
        if(root==NULL)
            return;
        
        target-=root->val;
        
        temp.push_back(root->val);        
        if(target==0 && root->left==NULL && root->right==NULL){
            res.push_back(temp);
            temp.clear();
        }
        
        checker(root->left,target,res,temp);
        checker(root->right,target,res,temp);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> temp;
        if(root==NULL)
            return res;
        
        checker(root,targetSum,res,temp);
         
        return res;
    }
};