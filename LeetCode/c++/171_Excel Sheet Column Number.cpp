class Solution 
{
public:
    int titleToNumber(string s) 
    {
        if (s.empty()) return 0; int res = 0;
        for (int i = 0; i < s.size(); i++) res += (s[i] - 64) * pow(26, s.size() - 1 - i);
        return res;
    }
};