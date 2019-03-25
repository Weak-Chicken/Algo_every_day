/*
Solution from StefanPochmann on https://leetcode.com/problems/missing-number/discuss/69832/1%2B-lines-Ruby-Python-Java-C%2B%2B
*/
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        long n = nums.size();
        return (n * (n + 1) / 2) - accumulate(nums.begin(), nums.end(), 0);
    }
};