#include <sstream>

class Solution 
{
public:
    int myAtoi(string str) 
    {
        stringstream temp;
        temp << str;
        int result = 0;
        temp >> result;
        return result;
    }
};