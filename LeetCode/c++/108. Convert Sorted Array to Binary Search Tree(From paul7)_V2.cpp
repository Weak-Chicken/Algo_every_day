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
Inspired by paul7 on https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/35246/Accepted-C%2B%2B-recursive-solution-within-a-single-method
And Also Inspired by zhanganan on https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/35427/My-C-solution-with-recursion7ms
*/
class Solution 
{
private:
    TreeNode* backtracking(vector<int>& nums, int start, int end)
    {
        if (start > end) return NULL;
        else
        {
            int mid = (end + start) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = backtracking(nums, start, mid - 1);
            root->right = backtracking(nums, mid + 1, end);
            return root;
        }
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return backtracking(nums, 0, nums.size() - 1);
    }
};