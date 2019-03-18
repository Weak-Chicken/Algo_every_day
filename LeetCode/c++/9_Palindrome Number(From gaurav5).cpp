/*
Solution from gaurav5 on https://leetcode.com/problems/palindrome-number/discuss/5165/An-easy-c%2B%2B-8-lines-code-(only-reversing-till-half-and-then-compare)
*/
class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;
        int sum = 0;
        while (x > sum)
        {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
        return (sum == x || sum / 10 == x);
    }
};