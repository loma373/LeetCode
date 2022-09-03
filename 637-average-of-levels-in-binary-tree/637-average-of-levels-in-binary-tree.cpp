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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        
        int size=q.size();
        
        while(!q.empty()){
            root=q.front();
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
            
            size--;
            temp.push_back(root->val);
            q.pop();
            
            if(size==0){
                double sum=0;
                for(int i=0;i<temp.size();i++){
                    sum+=temp[i];
                }
                res.push_back((double)sum/temp.size());
                temp.clear();
                size=q.size();
            }
        }
        
        return res;
    }
};