/*
Solution from YuSi on https://leetcode.com/problems/gray-code/discuss/29880/Backtracking-C%2B%2B-solution. Mainly bit operation idea was borrowed.
*/
class Solution 
{
private:
    void backtracking(vector<int>& res, bitset<32>& combination, int n)
    {
        if (n == 0)
        {
            res.push_back(combination.to_ulong());
        }
        else
        {
            backtracking(res, combination, n - 1);
            combination.flip(n - 1);
            backtracking(res, combination, n - 1);
        }
    }
public:
    vector<int> grayCode(int n) 
    {
        if (n == 0) return vector<int> (1, 0);
        bitset<32> combination; vector<int> res;
        backtracking(res, combination, n);
        return res;
    }
};