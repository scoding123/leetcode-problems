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
    int height(TreeNode* root, int &ans){
        if(root==NULL)
            return 0;
        int lheight= height(root->left,ans);
        int rheight = height(root->right,ans);
       ans = std::max(ans, lheight+rheight+1);
        return std::max(rheight,lheight)+1;
            
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
       int ans = -1;
        int res = height(root,ans);
        return ans-1;
    }
};
