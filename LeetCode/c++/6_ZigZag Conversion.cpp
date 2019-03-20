class Solution 
{
public:
    string convert(string s, int numRows) 
    {
        string res = "";
        if (numRows == 0 || s.size() == 0) return res;
        if (numRows == 1) return s;
        for (int i = 0; i < numRows; i++)
        {
            if (i == 0 || i == numRows - 1)
            {
                int j = i;
                while (j < s.size()) {res += s[j]; j += (numRows - 1) * 2;}
            }
            else
            {
                int j = i;
                while (j < s.size()) 
                {
                    res += s[j]; 
                    if (j + (numRows - 1 - i) * 2 < s.size()) res += s[j + (numRows - 1 - i) * 2];
                    j += (numRows - 1) * 2;
                }
            }
        }
        return res;
    }
};