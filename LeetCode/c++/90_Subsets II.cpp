class Solution 
{
private:
    void backtracking(vector<vector<int>>& res, vector<int>& nums, vector<int>& combination, int arr_size, int begin, vector<bool>& used)
    {
        if (combination.size() == arr_size)
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = begin; i < nums.size(); i++)
            {
                if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;
                used[i] = true;
                combination.push_back(nums[i]);
                backtracking(res, nums, combination, arr_size, i + 1, used);
                combination.pop_back();
                used[i] = false;
            }
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res = {{}}; vector<int> combination;
        for (int i = 1; i <= nums.size(); i++)
        {
            vector<bool> used(nums.size(), false);
            backtracking(res, nums, combination, i, 0, used);
        }
        return res;
    }
};