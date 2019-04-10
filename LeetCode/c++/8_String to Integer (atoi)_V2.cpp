class Solution 
{
public:
    int myAtoi(string str) 
    {
        long res = 0, i = 0; bool neg = false;
        if (str.empty()) return res;
        while (i < str.size() && str[i] == ' ') i++;
        if (str[i] == '-') {neg = true; i++;};
        if (str[i] == '+') {if (neg) return 0; else i++;}
        while (i < str.size() && str[i] >= '0' && str[i] <= '9')
        {
            res *= 10;
            res += str[i] - 48;
            i++;
            if (res > 2147483649) break;
        }
        res = (neg) ? -res : res;
        if (res > 2147483647) res = 2147483647;
        else if (res < -2147483648) res = -2147483648;
        return res;
    }
};