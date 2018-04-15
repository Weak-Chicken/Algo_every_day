class Solution 
{
public:
    int romanToInt(string s) 
    {
        int result = 0;
        int temp = 0;
        bool lower = false;
        if (s.length() <= 0) return 0;
        for (int i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case 'I':
                case 'i':
                    temp = 1;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'V' || s[i + 1] == 'v' ||
                            s[i + 1] == 'x' || s[i + 1] == 'X' ||
                            s[i + 1] == 'l' || s[i + 1] == 'L' ||
                            s[i + 1] == 'c' || s[i + 1] == 'C' ||
                            s[i + 1] == 'd' || s[i + 1] == 'D' ||
                            s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'V':
                case 'v':
                    temp = 5;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'x' || s[i + 1] == 'X' ||
                            s[i + 1] == 'l' || s[i + 1] == 'L' ||
                            s[i + 1] == 'c' || s[i + 1] == 'C' ||
                            s[i + 1] == 'd' || s[i + 1] == 'D' ||
                            s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'x':
                case 'X':
                    temp = 10;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'l' || s[i + 1] == 'L' ||
                            s[i + 1] == 'c' || s[i + 1] == 'C' ||
                            s[i + 1] == 'd' || s[i + 1] == 'D' ||
                            s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'l':
                case 'L':
                    temp = 50;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'c' || s[i + 1] == 'C' ||
                            s[i + 1] == 'd' || s[i + 1] == 'D' ||
                            s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'c':
                case 'C':
                    temp = 100;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'd' || s[i + 1] == 'D' ||
                            s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'd':
                case 'D':
                    temp = 500;
                    if (i < s.length() - 1)
                    {
                        if (s[i + 1] == 'm' || s[i + 1] == 'M') lower = true;
                    }
                    break;
                case 'm':
                case 'M':
                    temp = 1000;
                    break;
            }
            
            lower ? result -= temp : result += temp;
            temp = 0;
            lower = false;
        }
        return result;
    }
};