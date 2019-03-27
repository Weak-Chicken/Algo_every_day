class Solution 
{
private:
    void backtracking(vector<int>& nums, vector<vector<int>>& res, vector<int>& combination)
    {
        if (combination.size() == nums.size())
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = 0 ; i < nums.size(); i++)
            {
                if (find(combination.begin(), combination.end(), nums[i]) != combination.end()) continue;
                combination.push_back(nums[i]);
                backtracking(nums, res, combination);
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> res; vector<int> combination;
        backtracking(nums, res, combination);
        return res;
    }
};