#include "debug_assistant.h"

using namespace std;

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
        if (abs(max_depth(root->left) - max_depth(root->right)) > 1) return false;
        return true;
    }
};