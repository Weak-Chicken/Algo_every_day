#include <sstream>

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        stringstream palindromestream;
        palindromestream << x;
        string p_s;
        palindromestream >> p_s;
        for (int i = 0; i < p_s.length(); i++)
        {
            
        }
    }
};