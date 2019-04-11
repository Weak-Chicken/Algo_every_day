#include "debug_assistant.h"

using namespace std;

class Solution 
{
public:
    int divide(long long dividend, long long divisor) 
    {
        cout << dividend << " | " << divisor;
        long long long_divisor = divisor; long long long_dividend = dividend; int count = 0;
        
        bool neg = ((long_dividend < 0 && long_divisor > 0) || (long_dividend > 0 && long_divisor < 0)) ? true : false;
        
        long_divisor = abs(long_divisor); long_dividend = abs(long_dividend);
        while (long_dividend > long_divisor) {long_dividend -= long_divisor; count++;}
        return (neg) ? -count : count;
    }
};