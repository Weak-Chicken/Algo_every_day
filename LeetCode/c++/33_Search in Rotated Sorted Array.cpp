class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        if (nums.size() == 0) return -1;
        
        int i = 0;
        int j = nums.size() - 1;
        if (target == nums[i]) return i;
        if (target == nums[j]) return j;
        
        if (target < nums[i])
        {
            if (target > nums[j]) return -1;
            while(target < nums[j] && nums[j] > nums[j - 1]) j--;
            if (target == nums[j])
            {
                return j;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            while(target > nums[i] && nums[i] < nums[i + 1]) i++;
            if (target == nums[i])
            {
                return i;
            }
            else
            {
                return -1;
            }
        }
    }
};