class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if (nums.size() == 0) return 0;
        
        int search = 0;
        
        while((nums[search] < target) && search < nums.size()) search++;
        
        return search;
    }
};