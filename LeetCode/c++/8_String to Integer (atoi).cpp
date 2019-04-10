#include <sstream>

class Solution 
{
public:
    int myAtoi(string str) 
    {
        stringstream ss;
        ss << str;
        int res = 0;
        ss >> res;
        return res;
    }
};