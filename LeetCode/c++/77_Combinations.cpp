class Solution 
{
private:
    void backtracking(int k, vector<vector<int>>& res, vector<int>& combination, vector<int>& nums)
    {
        if (k == 0)
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (!combination.empty() && nums[i] <= combination[combination.size() - 1]) continue;
                combination.push_back(nums[i]);
                backtracking(k - 1, res, combination, nums);
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> res; vector<int> combination; vector<int> nums(n, -1);
        for (int i = 0; i < nums.size(); i++) nums[i] = i + 1;
        backtracking(k, res, combination, nums);
        return res;
    }
};