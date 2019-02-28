class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        int max_sum = 0;
        int res = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++)
        {
            max_sum += nums[i];
            if (nums[i] > max_sum)
            {
                max_sum = nums[i];
            }
            res = max(max_sum, res);
        }
        
        return res;
    }
};