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
    TreeNode* minValue(TreeNode* root){
        while(root->left!=NULL){
            root = root -> left;
        }
        return root;
    }
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* succ=NULL;
        if(root==NULL)
            return NULL;
        if(p->right!=NULL)
            return minValue(p->right);
        while(root!=NULL){
            if(root->val>p->val){
                succ = root;
                root= root->left;
            }
            else if(root->val<p->val)
            {
                root = root->right;
            }
            else 
                break;
        }
        return succ;
        
    }
};
