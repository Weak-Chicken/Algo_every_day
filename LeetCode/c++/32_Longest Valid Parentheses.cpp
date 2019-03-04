class Solution 
{
public:
    int longestValidParentheses(string s) 
    {
        if (s.size() <= 1) return 0;
        int max_length = 0;
        int left_bracket = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            while (s[i] != '(' && i < s.size()) i++;
            
            left_bracket = 1;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == '(')
                {
                    left_bracket++;
                }
                else 
                {
                    if (s[j] == ')') left_bracket--;
                }
                if (left_bracket < 0)
                {
                    max_length = max(max_length, j - i);
                    break;
                }
                if (left_bracket == 0) max_length = max(max_length, j + 1 - i);
            }
            if (left_bracket == 0) max_length = max(max_length, (int)s.size() - i);
        }
        return max_length;
    }
};