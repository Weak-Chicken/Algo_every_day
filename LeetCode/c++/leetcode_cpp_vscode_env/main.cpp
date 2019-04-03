#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include "solution.h" 
#include "debug_assistant.h"

using namespace std;

//===================================INPUT===================================
vector<int> nums = {2, 7, 11, 15};
int target = 9;
string a = "11";
string b = "1";

TreeNode* root = stringToTreeNode("[3,9,20,null,null,15,7]");

//===================================MAIN===================================
int main() 
{
    // debug_assistant_include_tester();
    Solution my_sol;

    cout << boolToString(my_sol.isBalanced(root));
    // string res = my_sol.test();
    // cout << res;
    
    return 0;
}