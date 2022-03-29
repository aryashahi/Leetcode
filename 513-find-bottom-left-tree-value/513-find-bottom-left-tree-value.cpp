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
      void recursion(TreeNode* root, vector<int> &ans, int level){
        if(root==NULL)
            return;
        if(level==ans.size())
            ans.push_back(root->val);
         recursion(root->left,ans,level+1);
        recursion(root->right,ans,level+1);
       
    }
    int findBottomLeftValue(TreeNode* root) {
         vector<int>ans;
        // if(root==NULL)
        //     return ans;
        recursion(root, ans,0);
        return ans.back();
    }
};