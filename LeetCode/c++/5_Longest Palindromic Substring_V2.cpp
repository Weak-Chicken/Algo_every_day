class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        string res = "";
        if (s.size() <= 1) return s;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (res.size() > s.size() - i) break;
            for (int j = s.size() - 1; j > i; j--)
            {
                if (res.size() > j - i + 1) break;
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