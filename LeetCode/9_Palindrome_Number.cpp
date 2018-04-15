#include <sstream>

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        bool find = true;
        stringstream palindromestream;
        palindromestream << x;
        string p_s;
        palindromestream >> p_s;
        for (int i = 0; i < p_s.length(); i++)
        {
            if (p_s[i] != p_s[p_s.length() - 1 - i])
            {
                find = false;
                break;
            }
        }
        return find;
    }
};