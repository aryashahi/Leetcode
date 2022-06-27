/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    void helper(Node *node){
        //if(node->children ==NULL)
          //  return;
        ans.push_back(node->val);
     for(auto it:node->children)   
     helper(it);
    }
    
    vector<int> preorder(Node* root) {
        if(!root)
            return ans;
        helper(root);
        return ans;
    }
};