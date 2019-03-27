class Solution 
{
private:
    void backtracking(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int start)
    {
        if (target == 0)
        {
            res.push_back(combination);
        }
        else if (target > 0)
        {
            for (int i = start; i < candidates.size(); i++)
            {
                combination.push_back(candidates[i]);
                backtracking(candidates, target - candidates[i], res, combination, i + 1);
                combination.pop_back();
                while (i < candidates.size() - 1 && candidates[i] == candidates[i + 1]) i++;
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res; vector<int> combination;
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, res, combination, 0);
        return res;
    }
};