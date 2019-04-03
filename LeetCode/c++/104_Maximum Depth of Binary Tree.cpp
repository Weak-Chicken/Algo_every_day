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
    int go_deep(TreeNode* p)
    {
        if (p == NULL) return 0;
        else return max(go_deep(p->left), go_deep(p->right)) + 1;
    }
public:
    int maxDepth(TreeNode* root) 
    {
        return go_deep(root);
    }
};