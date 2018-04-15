class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.size() == 1) return strs[0];
        if (strs.size() == 0) return "";
        
        string compare = strs[0];
        string length = "";
        bool su = false;
        for (int i = 1; i < strs.size(); i++)
        {
            (compare.length() > strs[i].length()) ? length = compare : length = strs[i];
            
            for (int j = 0; j < length.length(); j++)
            {
                if (compare[j] != strs[i][j])
                {
                    compare = compare.substr(0, j);
                    break;
                }
                su = true;
            }
        }
        if (!su) return "";
        return compare;
    }
};