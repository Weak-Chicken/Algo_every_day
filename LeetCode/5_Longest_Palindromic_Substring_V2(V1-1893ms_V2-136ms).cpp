class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        string select = "";
        if (s.length() > 0)
        {
            select = s.substr(0,1);
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s.length() + 1 - i > select.length())
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (j + 1 - i > select.length())
                    {
                        if (s[i] == s[j])
                        {
                            bool found = true;
                            int upper = j;
                            int lower = i;
                            while (upper - lower > 2)
                            {
                                upper--;
                                lower++;
                                if (s[upper] != s[lower])
                                {
                                    found = false;
                                }
                                if (!found)
                                {
                                    break;
                                }
                            }
                            if (found)
                            {
                                string substring = s.substr(i, j - i + 1);
                                if (select.length() < substring.length())
                                {
                                    select = substring;
                                }
                            }
                        }
                    }
                }
            }
        }
        return select;
    }
};