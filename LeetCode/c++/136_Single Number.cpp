class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end()); int i = 0;
        while (i < nums.size() - 1 && nums[i] == nums[i + 1]) i += 2;
        return nums[i];
    }
};