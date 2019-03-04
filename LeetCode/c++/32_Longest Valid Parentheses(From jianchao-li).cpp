/*
Solution from jianchao-li on https://leetcode.com/problems/longest-valid-parentheses/discuss/14126/My-O(n)-solution-using-a-stack/243370
*/
class Solution 
{
public:
    int longestValidParentheses(string s) 
    {
        vector<int> stack;
        stack.push_back(-1);
        int max_length = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                stack.push_back(i);
            }
            else
            {
                stack.pop_back();
                if (stack.empty())
                {
                    stack.push_back(i);
                }
                else
                {
                    max_length = max(max_length, i - stack.back());
                }
            }
        }
        return max_length;
    }
};