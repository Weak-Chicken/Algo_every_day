class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int res = 0; string searched = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < searched.size(); j++) 
            {
                if (s[i] == searched[j]) 
                {
                    res = max(res, int(searched.size()));
                    searched.erase(0, j + 1);
                    break;
                }
            }
            searched.push_back(s[i]);
        }
        res = max(res, int(searched.size()));
        return res;
    }
};