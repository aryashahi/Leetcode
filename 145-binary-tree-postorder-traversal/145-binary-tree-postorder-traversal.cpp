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
    void postorder(TreeNode* node, vector<int>&post){
      if(node==NULL)
          return;
         postorder(node->left, post);
         postorder(node->right, post);
         post.push_back(node->val);
      }
      
         
           
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post;
        if(root==NULL)
            return post;
        postorder(root,post);
        return post;
    }
};