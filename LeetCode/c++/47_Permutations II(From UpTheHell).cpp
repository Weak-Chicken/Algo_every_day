/*
Solution from UpTheHell on https://leetcode.com/problems/permutations-ii/discuss/18594/Really-easy-Java-solution-much-easier-than-the-solutions-with-very-high-vote
*/
class Solution 
{
private:
    void backtracking(vector<int>& nums, vector<vector<int>>& res, vector<int>& combination, vector<bool>& used)
    {
        if (combination.size() == nums.size())
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (used[i]) continue;
                if (i > 0 && nums[i - 1] == nums[i] && !used[i - 1]) continue;
                used[i] = true;
                combination.push_back(nums[i]);
                backtracking(nums, res, combination, used);
                used[i] = false;
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> res; vector<int> combination; vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backtracking(nums, res, combination, used);
        return res;
    }
};