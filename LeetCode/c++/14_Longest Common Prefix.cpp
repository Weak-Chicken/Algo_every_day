class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string res = "";
        if (strs.size() == 0) return res;
        if (strs.size() == 1) return strs[0];
        int comp = 0;
        while (true)
        {
            for (int i = 0; i < strs.size() - 1; i++)
            {
                if (strs[i][comp] != strs[i + 1][comp] || comp >= strs[i].size()) return res;
            }
            res += strs[0][comp];
            comp++;
        }
        return res;
    }
};