class Solution 
{
public:
    int fib(int N) 
    {
        int Fib_0 = 0, Fib_1 = 1;     
        while (N--) Fib_0 = (Fib_1 += Fib_0) - Fib_0;
        return Fib_0;
    }
};