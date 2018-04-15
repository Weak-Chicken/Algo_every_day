#include <sstream>

class Solution 
{
public:
    int reverse(int x) 
    {
        bool neg;
        stringstream reversestream;
        (x < 0) ? neg = true : neg = false;
        reversestream << x;
        string temp_s_1 = reversestream.str();
        if (neg) temp_s_1.erase(0, 1);
        string reversed(temp_s_1.rbegin(), temp_s_1.rend());
        long result;
        reversestream.str("");
        reversestream << reversed;
        reversestream >> result;
        if (neg) result = -result;
        if (result >= 2147483647 || result <= -2147483649) return 0;
        return result;
    }
};