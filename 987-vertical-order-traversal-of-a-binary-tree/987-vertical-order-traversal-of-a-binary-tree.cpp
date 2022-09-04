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
    void TtoM(TreeNode* root, vector<vector<int>>& mat,int i,int j){
        if(!root)
            return;
        
        mat.push_back({i,j,root->val});
        
        TtoM(root->left,mat,i+1,j-1);
        TtoM(root->right,mat,i+1,j+1);
    }
    
     static bool comp(vector<int> &a, vector<int> &b){
        
        if(a[1] != b[1]) 
            return a[1] < b[1];
         
        if(a[1] == b[1] && a[0] != b[0]) 
            return a[0] < b[0];
        
        return a[2] < b[2];
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> mat;
     
        TtoM(root,mat,0,0);
        vector<vector<int>> res;
        
        sort(mat.begin(),mat.end(),comp);
        
        int prev=mat[0][1];
        vector<int> temp;
        temp.push_back(mat[0][2]);
        
        for(int i = 1; i < mat.size(); i++){
            if(prev == mat[i][1]){
                temp.push_back(mat[i][2]);
            }
            else{
                res.push_back(temp);
                temp.clear();
                temp.push_back(mat[i][2]);
                prev = mat[i][1];
            }
        }
        
        res.push_back(temp);
        return res;
        
        return res;
    }
};