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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vec;
        inorder(root,vec);
        TreeNode* ans = new TreeNode(0);
        TreeNode* cur = ans;
        for(int v:vec){
            cur->right= new TreeNode(v);
            cur=cur->right;
        }
        return ans->right;
    }
    
    private:
    void inorder(TreeNode* node, vector<int> &vec){
        if(node==NULL){
            return;
        }
        inorder(node->left, vec);
        vec.push_back(node->val);
        inorder(node->right, vec);
    }
};

