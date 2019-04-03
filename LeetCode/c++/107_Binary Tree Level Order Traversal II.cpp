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
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> res; 
        if (root == NULL) return res;
        vector<TreeNode*> s = {root};
        
        while (!s.empty())
        {
            vector<int> temp;
            for (int i = 0; i < s.size(); i++) temp.push_back(s[i]->val);
            res.insert(res.begin(), temp);
            vector<TreeNode*> cur;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i]->left != NULL) cur.push_back(s[i]->left);
                if (s[i]->right != NULL) cur.push_back(s[i]->right);
            }
            s = cur;
        }
        return res;
    }
};