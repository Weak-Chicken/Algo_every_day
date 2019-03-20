// -2147483648～2147483647 for 32bit int
class Solution 
{
public:
    int reverse(int x) 
    {
        int sum = 0;
        while (x != 0)
        {
            if (sum > 214748364 || sum < -214748364) return 0;
            sum = sum * 10 + x % 10;
            x = x /10;
        }
        return sum;
    }
};