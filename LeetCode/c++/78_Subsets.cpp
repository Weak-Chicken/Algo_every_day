class Solution 
{
private:
    void backtracking(vector<int>& nums, vector<vector<int>>& res, vector<int>& combination, int arr_size, int begin)
    {
        if (combination.size() == arr_size)
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = begin; i < nums.size(); i++)
            {
                combination.push_back(nums[i]);
                backtracking(nums, res, combination, arr_size, i + 1);
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res = {{}}; vector<int> combination;
        for (int i = 1; i <= nums.size(); i++)
            backtracking(nums, res, combination, i, 0);
        return res;
    }
};