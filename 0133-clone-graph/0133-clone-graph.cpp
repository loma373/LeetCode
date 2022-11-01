/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* curr,map<Node*,Node*>& mp){
        Node* ans=new Node(curr->val);
        mp[curr]=ans;
        vector<Node*> neighbour;
        
        for(auto it:curr->neighbors){
            if(mp.find(it)!=mp.end()){
                neighbour.push_back(mp[it]);
            }
            else{
                neighbour.push_back(dfs(it,mp));
            }
        }
        
        ans->neighbors=neighbour;
        
        return ans;
    }
    
    Node* cloneGraph(Node* node) {
        map<Node*,Node*> mp;
        
        if(node==NULL)
            return NULL;
        
        if(node->neighbors.size()==0){
            Node* ans=new Node(node->val);
            return ans;
        }
        
        return dfs(node,mp);
    }
};