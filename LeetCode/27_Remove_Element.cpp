class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if (nums.empty()) return 0;
        if (find(nums.begin(), nums.end(), val) == nums.end()) return nums.size();
        std::sort(nums.begin(), nums.end());
        int poi = 0;
        while (nums[poi] < val) poi++;
        while (nums[poi] == val && poi != nums.size()) nums.erase(nums.begin() + poi);
        return nums.size();
    }
};