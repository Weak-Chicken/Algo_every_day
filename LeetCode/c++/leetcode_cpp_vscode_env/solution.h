#include "leetcode_datatype_support.h"

using namespace std;

class Solution 
{
public:
    bool isBalanced(TreeNode* root) 
    {
        if (root == NULL) return true;
        vector<TreeNode *> left; vector<TreeNode *> right;
        vector<TreeNode *> next_left = {root->left}; vector<TreeNode *> next_right = {root->right}; bool my_null = false;
        while (!next_left.empty() || !next_right.empty())
        {
            left = next_left; right = next_right;
            next_left.clear(); next_right.clear(); 
            for (int i = 0; i < left.size(); i++)
            {
                if (left[i]->left != NULL) next_left.push_back(left[i]->left);
                if (left[i]->right != NULL) next_left.push_back(left[i]->right);
            }
            for (int i = 0; i < right.size(); i++)
            {
                if (right[i]->left != NULL) next_right.push_back(right[i]->left);
                if (right[i]->right != NULL) next_right.push_back(right[i]->right);
            }
            if (next_left.empty() || next_right.empty())
            {
                if (my_null) return false;
                else my_null = true;
            }
        }
        return true;
    }
};