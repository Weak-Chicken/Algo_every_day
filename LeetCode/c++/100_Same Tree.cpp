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
    bool comparing(TreeNode* p, TreeNode* q)
    {
        if (p == NULL && q == NULL) return true;
        else if (p == NULL || q == NULL || (p->val != q->val)) return false;
        else return (comparing(p->left, q->left) && comparing(p->right, q->right));
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        return comparing(p, q);
    }
};