class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        int result = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            int buffer = nums[i];
            if (buffer > result) result = buffer;
            for (int j = i + 1; j < nums.size(); j++)
            {
                buffer += nums[j];
                if (buffer > result) result = buffer;
            }
        }
        return result;
    }
};