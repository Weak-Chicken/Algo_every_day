class Solution 
{
public:
    int fib(int N) 
    {
        int Fib_0 = 0; int Fib_1 = 1;
        if (N == 0) return Fib_0;
        N--;
        
        while (N--) Fib_0 = (Fib_1 += Fib_0) - Fib_0;
        return Fib_1;
    }
};