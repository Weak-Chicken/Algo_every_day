/*
Solution from Yiiii on https://leetcode.com/problems/sqrtx/discuss/25047/A-Binary-Search-Solution
*/
class Solution 
{
public:
    int mySqrt(int x) 
    {
        int upper = 46340, lower = 0;
        while (upper > lower)
        {
            int new_side = (upper - lower) / 2 + lower + 1; 
            if (new_side * new_side > x) upper = new_side - 1;
            else lower = new_side;
        }
        return lower;
    }
};