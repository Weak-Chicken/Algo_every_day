class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        int max = 0, max_res, i = 0, j = -1;
        while (i < nums.size() - 1)
        {
            while (i < nums.size() - 1 && nums[i] == nums[i + 1]) i++;
            if (i - j > max) {max = i + 1; max_res = nums[i]; j = i;}
            i++;
        }
        return max_res;
    }
};