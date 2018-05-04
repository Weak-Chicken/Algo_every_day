// Inspired by qddpx on Leetcode. https://leetcode.com/problems/maximum-subarray/discuss/20200/Share-my-solutions-both-greedy-and-divide-and-conquer

class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        int sum = 0;
        int min = 0;
        int result = nums[0];
        
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            
            if (sum - min > result) result = sum - min;
            if (sum < min) min = sum;
        }
        
        return result;
    }
};