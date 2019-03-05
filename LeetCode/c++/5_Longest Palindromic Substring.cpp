class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        string res = "";
        if (s.size() <= 1) return s;
        
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = s.size() - 1; j > i; j--)
            {
                if (s[i] == s[j])
                {
                    int l = i + 1;
                    int r = j - 1;
                    while (s[l] == s[r] && l < r)
                    {
                        l++;
                        r--;
                    }
                    if (l >= r && (j - i + 1) > res.size()) res = s.substr(i, j - i + 1);
                }
            }
        }
        if (res.size() == 0) res = s[0];
        return res;
    }
};