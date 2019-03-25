class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int>::iterator p = remove(nums.begin(), nums.end(), 0);
        for (vector<int>::iterator iter = p; iter != nums.end(); iter++) *iter = 0;
    }
};