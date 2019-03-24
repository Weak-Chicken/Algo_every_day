class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1 && nums[0] == 1) return 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1] - 1) return i + 1;
        }
        return (nums[0] == 0) ? nums[nums.size() - 1] + 1 : 0;
    }
};