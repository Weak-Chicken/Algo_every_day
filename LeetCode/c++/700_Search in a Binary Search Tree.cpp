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
    TreeNode* backtracking(TreeNode* p, int& val)
    {
        if (p == NULL) return NULL;
        else if (p->val == val) return p;
        else
        {
            TreeNode* left = backtracking(p->left, val);
            if (left != NULL) return left;
            TreeNode* right = backtracking(p->right, val);
            if (right != NULL) return right;
            return NULL;
        }
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        return backtracking(root, val);
    }
};