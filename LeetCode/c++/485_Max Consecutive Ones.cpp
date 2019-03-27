class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max_res = 0, cur = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                max_res = max(max_res, cur);
                cur = 0;
            }
            else cur++;
        }
        max_res = max(max_res, cur);
        return max_res;
    }
};