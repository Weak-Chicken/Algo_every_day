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
    int searching(TreeNode* p)
    {
        if (p == NULL) return 0;
        else if ((p->left == NULL && p->right == NULL) || (p->left != NULL && p->right != NULL)) 
            return min(searching(p->left), searching(p->right)) + 1;
        else return max(searching(p->left), searching(p->right)) + 1;
    }
public:
    int minDepth(TreeNode* root) 
    {
        return searching(root);
    }
};