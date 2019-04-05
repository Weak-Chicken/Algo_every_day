#include "debug_assistant.h"

using namespace std;

class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string processed = "";
        for (int i = 0; i < s.size(); i++) 
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) processed += s[i];
        int l = 0, r = processed.size() - 1;
        while (l < r)
        {
            cout << processed[l] << " \ " << processed[r] << endl;
            if (!(processed[l] == processed[r] || processed[l] == processed[r] + 32 || processed[l] == processed[r] - 32)) return false;
            l++; r--;
        }
        return true;
    }
};