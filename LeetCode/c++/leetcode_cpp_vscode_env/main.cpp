#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include "solution.h" 
#include "debug_assistant.h"

using namespace std;

//===================================INPUT===================================
vector<int> nums = {2, 7, 11, 15};
int target = 9;
string a = "11";
string b = "1";

//===================================MAIN===================================
int main() 
{
    // debug_assistant_include_tester();
    Solution my_sol;

    string res = my_sol.addBinary(a, b);
    cout << res;
    
    return 0;
}