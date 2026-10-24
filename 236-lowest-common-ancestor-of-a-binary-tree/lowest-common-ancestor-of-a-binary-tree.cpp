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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        //Base case
        if(root==NULL || root==p || root==q )
        {
            return root;
        }
        //search in left and right subtree 
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        //if both sides return a node, root is the Lca
        if(left !=NULL && right!=NULL)
        {
            return root;
        }
        //otherwise, return the non-NULL result
        if(left!=NULL)
        {
            return left;
        }
        return right;
    }
};