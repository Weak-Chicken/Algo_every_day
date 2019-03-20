class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> sta;
        if (s.size() == 0) return true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') sta.push(s[i]);
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if (sta.empty()) return false;
                char temp = sta.top();
                switch (s[i])
                {
                    case ')':
                        if (temp == '(') sta.pop();
                        else return false;
                        break;
                    case ']':
                        if (temp == '[') sta.pop();
                        else return false;
                        break;
                    case '}':
                        if (temp == '{') sta.pop();
                        else return false;
                        break;
                }
            }
        }
        return (sta.empty()) ? true : false;
    }
};