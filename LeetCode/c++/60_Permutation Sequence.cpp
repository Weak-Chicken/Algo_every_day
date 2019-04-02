class Solution 
{
private:
    long factorial(int n)
    {
        if (n <= 2) return n;
        long res = 1;
        for (int i = 2; i <= n; i++) res *= i;
        return res;
    }
    
    void backtracking(int& k, int n, vector<int>& res, vector<int>& combination)
    {
        if (combination.size() == n)
        {
            if (k > 0) k--;
            else if (k == 0) res = combination;
        } 
        else
        {
            for (int i = 0; i < n; i++)
            {
                long f_c = factorial(n - combination.size());
                if (!combination.empty() && k > f_c)
                {
                    k -= f_c;
                    return;
                }
                if (find(combination.begin(), combination.end(), i + 1) != combination.end()) continue;
                if (!res.empty()) return;
                combination.push_back(i + 1);
                backtracking(k, n, res, combination);
                combination.pop_back();
            }
        }
    }
    string vtostr(vector<int> invec)
    {
        string res = "";
        for (int i = 0; i < invec.size(); i++) res += to_string(invec[i]);
        return res;
    }
public:
    string getPermutation(int n, int k) 
    {
        vector<int> res; vector<int> combination; k--;
        backtracking(k, n, res, combination);
        return vtostr(res);
    }
};