#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include "solution.h" 

using namespace std;

//===================================INPUT===================================
vector<int> nums = {2, 7, 11, 15};
int target = 9;
string a = "11";
string b = "1";
// string s = "abcabcbb";
string s = "0P";

TreeNode* root = stringToTreeNode("[1,2,2,3,3,null,null,4,4]");

vector<vector<int>> triangle = 
{
    {2},
    {3,4},
    {6,5,7},
    {4,1,8,3}
};

//===================================MAIN===================================
int main() 
{
    // debug_assistant_include_tester();
    Solution my_sol;

    cout << my_sol.isPalindrome(s);
    // string res = my_sol.test();
    // cout << res;
    
    return 0;
}