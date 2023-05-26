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
    void getElements(TreeNode* root, vector<int>& res){
        if(root==NULL){
            return;
        }
        
        getElements(root->left,res);
        res.push_back(root->val);
        getElements(root->right,res);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        
        getElements(root1,res);
        getElements(root2,res);
        
        sort(res.begin(),res.end());
        
        return res;
    }
};