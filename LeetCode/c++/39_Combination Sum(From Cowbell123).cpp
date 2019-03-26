/*
Solution from Cowbell123 on https://leetcode.com/problems/combination-sum/discuss/16509/Iterative-Java-DP-solution
*/
class Solution 
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<vector<int>>> dp(target + 1);
        sort(candidates.begin(), candidates.end());
        for (int i = 0 ; i <= target; i++)
        {
            vector<vector<int>> current_res;
            for (int j = 0 ; j < candidates.size() && candidates[j] <= i; j++)
            {
                if (candidates[j] == i) {vector<int> temp = {i}; current_res.push_back(temp);}
                else
                {
                    vector<vector<int>> last_res = dp[i - candidates[j]];
                    for (int k = 0; k < last_res.size(); k++)
                    {
                        if (candidates[j] >= last_res[k][last_res[k].size() - 1])
                        {
                            vector<int> temp = last_res[k];
                            temp.push_back(candidates[j]);
                            current_res.push_back(temp);
                        }
                    }
                }
            }
            dp[i] = current_res;
        }
        return dp[target];
    }
};