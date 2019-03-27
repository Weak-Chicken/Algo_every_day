/*
Solution from prime_tang on https://leetcode.com/problems/combination-sum/discuss/16496/Accepted-16ms-c%2B%2B-solution-use-backtracking-easy-understand.
*/
class Solution 
{
private:
    void backtracking(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination)
    {
        if (target == 0)
        {
            res.push_back(combination);
        }
        else if (target > 0)
        {
            for (int i = 0; i < candidates.size(); i++)
            {
                if (!combination.empty() && candidates[i] < combination[combination.size() - 1]) continue;
                combination.push_back(candidates[i]);
                backtracking(candidates, target - candidates[i], res, combination);
                combination.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> combination;
        backtracking(candidates, target, res, combination);
        return res;
    }
};