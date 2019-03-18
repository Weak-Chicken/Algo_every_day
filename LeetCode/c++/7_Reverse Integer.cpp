// -2147483648～2147483647 for 32bit int
class Solution 
{
public:
    int reverse(int x) 
    {
        int sum = 0;
        bool neg = (x < 0) ? true : false;
        if (x == -2147483648) return 0;
        x = abs(x);
        while (x > 0)
        {
            if (sum > 214748364) return 0;
            sum = sum * 10 + x % 10;
            x = x /10;
        }
        return (neg) ? -sum : sum;
    }
};