/*
Solution inspired by zxyperfect on https://leetcode.com/problems/permutation-sequence/discuss/22524/Sharing-my-straightforward-C%2B%2B-solution-with-explanation
*/
class Solution 
{
public:
    string getPermutation(int n, int k) 
    {
        int factorial_table[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        vector<char> nums = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; string res;
        while (n > 0)
        {
            int factor = (k - 1) / factorial_table[n - 1];
            res += nums[factor]; nums.erase(nums.begin() + factor);
            k -= factor * factorial_table[n - 1];
            n--;
        }
        return res;
    }
};