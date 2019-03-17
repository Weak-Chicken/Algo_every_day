/*
Solution from jianchao-li on https://leetcode.com/problems/majority-element/discuss/51612/6-Suggested-Solutions-in-C%2B%2B-with-Explanations
*/
class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        if (nums.size() == 1) return nums[0];
        // sort(nums.begin(), nums.end());
        nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
        return nums[nums.size() / 2];
    }
};