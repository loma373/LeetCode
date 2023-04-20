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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        queue<pair<TreeNode*,int>> q;
        int res=1;
        
        q.push({root,0});
        
        while(!q.empty()){
            int size=q.size();
            int start=q.front().second;
            int end=q.back().second;
            
            res=max(res,end-start+1);
            
            for(int i=0;i<size;i++){
                auto np=q.front();
                TreeNode* node=np.first;
                int ni=np.second-start;
                q.pop();
                
                if(node->left!=NULL)
                    q.push({node->left,2LL*ni+1});
                if(node->right!=NULL)
                    q.push({node->right,2LL*ni+2});
                
            }
        }
        
        return res;
    }
};