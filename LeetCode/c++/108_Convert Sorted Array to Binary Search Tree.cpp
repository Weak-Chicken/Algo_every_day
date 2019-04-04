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
Solution from paul7 on https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/35246/Accepted-C%2B%2B-recursive-solution-within-a-single-method
*/
class Solution 
{
private:
    TreeNode* backtracking(vector<int>& nums)
    {
        if (nums.size() == 0) return NULL;
        else if (nums.size() == 1) return new TreeNode(nums[0]);
        else
        {
            TreeNode* root = new TreeNode(nums[nums.size() / 2]);
            vector<int> left_nums(nums.begin(), nums.begin() + nums.size() / 2);
            vector<int> right_nums(nums.begin() + nums.size() / 2 + 1, nums.end());
            root->left = backtracking(left_nums);
            root->right = backtracking(right_nums);
            return root;
        }
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return backtracking(nums);
    }
};