/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
Solution from benlong on https://leetcode.com/problems/balanced-binary-tree/discuss/35691/The-bottom-up-O(N)-solution-would-be-better
*/
class Solution 
{
private:
    int max_depth(TreeNode* p)
    {
        if (p == NULL) return 0;
        return max(max_depth(p->left), max_depth(p->right)) + 1;
    }
public:
    bool isBalanced(TreeNode* root) 
    {
        if (root == NULL) return true;
        return abs(max_depth(root->left) - max_depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};