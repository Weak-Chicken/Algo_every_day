class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> result = {-1, -1};
        if (nums.size() == 0) return result;
        
        int i = 0;
        while(nums[i] < target && i < nums.size() - 1) i++;
        if (nums[i] == target)
        {
            result[0] = i;
            while(nums[i] == target && i < nums.size()) i++;
            (i == result[0]) ? result[1] = i : result[1] = i - 1;
            return result;
        }
        else
        {
            return result;
        }
    }
};