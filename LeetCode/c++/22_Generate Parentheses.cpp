class Solution 
{
private:
    void backtracking(int left, int right, string& combination, vector<string>& res)
    {
        if (left == 0 && right == 0)
        {
            res.push_back(combination);
        }
        if (left > 0)
        {
            combination.push_back('(');
            backtracking(left - 1, right, combination, res);
            combination.pop_back();
        }
        if (right > 0)
        {
            combination.push_back(')');
            backtracking(left, right - 1, combination, res);
            combination.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> res; string combination;
        backtracking(n, n, combination, res);
        return res;
    }
};