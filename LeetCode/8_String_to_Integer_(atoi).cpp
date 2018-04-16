class Solution 
{
public:
    int myAtoi(string s) 
    {
        if (s.empty()) return 0;
        string buffer = "";
        bool neg = false;
        bool num = false;
        bool sign = false;
        long result = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == ' ' || s[i] == '+' || s[i] == '-')
            {
                switch(s[i])
                {
                    case ' ':
                        if (num || sign)
                        {
                            if (num)
                            {
                                for (int j = 0; j < buffer.length(); j++)
                                {
                                    result *= 10;
                                    result += buffer[j] - 48;
                                    if (j > 12)
                                    {
                                        break;
                                    }
                                }
                                if (neg) result = -result;
                                if (result > 2147483647) return 2147483647;
                                if (result < -2147483648) return -2147483648; 
                                return result;
                            }
                            else
                            {
                                return 0;
                            }
                        }
                        break;
                    case '+':
                        if (sign)
                        {
                            return 0;
                        }
                        else
                        {
                            sign = true;
                        }
                        break;
                    case '-':
                        if (sign)
                        {
                            return 0;
                        }
                        else
                        {
                            sign = true;
                            neg = true;
                        }
                        break;
                    default:
                        num = true;
                        buffer.insert(buffer.end(), 1, s[i]);
                        break;
                }
            }
            else
            {
                if (num)
                {
                    for (int j = 0; j < buffer.length(); j++)
                    {
                        result *= 10;
                        result += buffer[j] - 48;
                        if (j > 12)
                        {
                            break;
                        }
                    }
                    if (neg) result = -result;
                    if (result > 2147483647) return 2147483647;
                    if (result < -2147483648) return -2147483648; 
                    return result;
                }
                else
                {
                    return 0;
                }
            }
        }
        for (int j = 0; j < buffer.length(); j++)
        {
            result *= 10;
            result += buffer[j] - 48;
            if (j > 12)
            {
                break;
            }
        }
        if (neg) result = -result;
        if (result > 2147483647) return 2147483647;
        if (result < -2147483648) return -2147483648; 
        return result;
    }
};