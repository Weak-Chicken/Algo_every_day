class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if (nums.empty()) return 0;
        int pos = 0;
        
        while (nums[pos] < target && pos < nums.size()) pos++;
        return pos;
    }
};