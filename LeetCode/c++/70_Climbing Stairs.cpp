class Solution 
{
private:
    int conbination(int m, int n)
    {
        long res = 1;
        int counter = 1;
        while (counter <= n)
        {
            res *= m;
            m--;
            res /= counter;
            counter++;
        }
        return (int)(res);
    }
public:
    int climbStairs(int n) 
    {
        int res = 0;
        if (n <= 0) return res;
        
        res += 1;
        int twos = n / 2;
        for (int i = 1; i <= twos; i++)
        {
            res += conbination(n - i, i);
        }
        
        return res;
    }
};