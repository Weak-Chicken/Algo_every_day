/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
private:
    bool searching(TreeNode* l, TreeNode* r)
    {
        if (l == NULL && r == NULL) return true;
        else if (l == NULL || r == NULL || (l->val != r->val)) return false;
        else return (searching(l->left, r->right) && searching(l->right, r->left));
    }
public:
    bool isSymmetric(TreeNode* root) 
    {
        return (root == NULL) ? true : searching(root->left, root->right);
    }
};