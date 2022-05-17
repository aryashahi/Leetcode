/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    queue<pair<TreeNode*,TreeNode*>>q;
    q.push({original,cloned});
    TreeNode* ans;
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* node1 = q.front().first;
            TreeNode* node2 = q.front().second;
            q.pop();
            
            if (node1==target){
                ans=node2;
                break;
            }
            if(node1->left!=NULL){
                q.push({node1->left,node2->left});
            }
             if(node1->right!=NULL){
                q.push({node1->right,node2->right});
            }
            
            
        }
        
    }
        return ans;
    }
};