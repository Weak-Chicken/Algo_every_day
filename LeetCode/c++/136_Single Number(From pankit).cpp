/*
Solution from pankit on https://leetcode.com/problems/single-number/discuss/43237/4-lines-of-c%2B%2B-solution
*/
class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int num = 0;
        for (int i = 0; i < nums.size(); i++) num ^= nums[i];
        return num;
    }
};