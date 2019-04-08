class Solution 
{
public:
    string removeOuterParentheses(string S) 
    {
        int left = 1; string res = ""; int start = 0;
        for (int i = 1; i < S.size(); i++)
        {
            if (S[i] == '(') left++;
            else if (S[i] == ')') left--;
            if (!left) 
            {
                res += S.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return res;
    }
};