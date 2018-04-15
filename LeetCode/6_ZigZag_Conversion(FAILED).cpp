class Solution 
{
public:
    string convert(string s, int numRows) 
    {
        string result = "";
        if (numRows <= 1) return s;
        for (int i = 0; i < numRows; i++)
        {
            if (i == 0 || i == numRows - 1)
            {
                int j = i;
                while (j < s.length())
                {
                    result.insert(result.length(), s.substr(j, 1));
                    j += 2 * numRows - 2;
                }
            }
            else
            {
                int j = i;
                while (j < s.length())
                {
                    result.insert(result.length(), s.substr(j, 1));
                    if (((numRows - 1) - i) * 2 + j < s.length()) result.insert(result.length(), s.substr(((numRows - 1) - i) * 2 + j, 1));
                    j += 2 * numRows - 2;
                }
            }
        }
        return result;
    }
};