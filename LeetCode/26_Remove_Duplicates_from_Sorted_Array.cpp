class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        int pos = 0;
        int curr_pos = 0;
        while (curr_pos < nums.size() - 1)
        {
            curr_pos++;
            while (nums[curr_pos] == nums[pos] && curr_pos < nums.size() - 1) curr_pos++;
            if (nums[curr_pos] != nums[pos])
            {
                pos++;
                nums[pos] = nums[curr_pos];
            }
        }
        return (pos + 1);
    }
};