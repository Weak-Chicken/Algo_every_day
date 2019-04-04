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
    int backtracking(TreeNode* p)
    {
        if (p == NULL) return 0;
        
        int left = backtracking(p->left);
        if (left == -1) return -1;
        int right = backtracking(p->right);
        if (right == -1) return -1;
        
        if (abs(left - right) > 1) return -1;
        else return max(left, right) + 1;
    }
public:
    bool isBalanced(TreeNode* root) 
    {
        return backtracking(root) != -1;
    }
};