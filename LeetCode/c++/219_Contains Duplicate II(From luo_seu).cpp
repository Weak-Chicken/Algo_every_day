/*
Solution from luo_seu on https://leetcode.com/problems/contains-duplicate-ii/discuss/61390/C%2B%2B-solution-with-unordered_set
*/
class Solution 
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_set<int> quickset;
        if (nums.size() == 0 || k <= 0) return false;
        if (k >= nums.size()) k = nums.size() - 1;
        for (int i = 0 ; i < nums.size(); i++)
        {
            if (i > k) quickset.erase(nums[i - k - 1]);
            if (quickset.find(nums[i]) != quickset.end()) return true;
            quickset.insert(nums[i]);
        }
        
        return false;
    }
};