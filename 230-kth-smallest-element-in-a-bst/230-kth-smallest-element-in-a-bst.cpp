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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> val;
        int ans;
        recursion(root,val);
        for(int i=0;i<val.size();i++){
            if(i+1==k)
            {
             ans=val[i];
            }
        }
        return ans;
    }
    
private:
    void recursion(TreeNode* node,  vector<int> &val){
        if(node==NULL){

            return;
        }
        recursion(node->left,val);

        val.push_back(node->val);
       
        recursion(node->right,val);
        
    }
};