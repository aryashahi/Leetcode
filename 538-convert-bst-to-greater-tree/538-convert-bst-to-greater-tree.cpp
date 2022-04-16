class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root == NULL)
        {
            return NULL;
        }
        convertBST(root->right);
        sum+=root->val;
        root->val = sum;
        convertBST(root->left);
        return root;
    }
};

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
    
//     void countingInorder(TreeNode* root, int &sum){
//         if(root==NULL)
//             return;
        
//         countingInorder(root->left, sum);
//         sum+=root->val;
//         countingInorder(root->right, sum);
        
//     }
//     void GreaterTree(TreeNode* &root, int &sum){
//         if(root==NULL)
//             return ;
        
//         countingInorder(root->left, sum);
//         int temp=root->val;
//         root->val=sum;
//         sum-=temp;
//         countingInorder(root->right,  sum);
        
//     }
    
    
    
//     TreeNode* convertBST(TreeNode* root) {
//         int sum=0;
//         countingInorder(root, sum);
//         GreaterTree(root, sum);
//         return root;
//     }
// };