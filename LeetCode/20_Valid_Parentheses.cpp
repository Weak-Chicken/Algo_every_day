class Solution 
{
public:
    bool isValid(string s) 
    {
        if (s.empty()) return true;
        vector<char> stack;
        if (s[0] == ')' || s[0] == ']' ||s[0] == '}') return false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' ||s[i] == '{')
            {
                stack.push_back(s[i]);
            }
            else
            {
                char back = stack.back();
                switch(s[i])
                {
                    case ')':
                        if (back != '(') return false;
                        break;
                    case ']':
                        if (back != '[') return false;
                        break;
                    case '}':
                        if (back != '{') return false;
                        break;
                    default:
                        break;
                }
                stack.pop_back();
            }
        }
        if (stack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};