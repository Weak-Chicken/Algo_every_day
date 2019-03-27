class Solution 
{
private:
    void letterCombinations_backtracking(string& digits, vector<string>& res, string& combination, vector<string>& cor_tab)
    {
        if (digits.empty())
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = 0; i < cor_tab[(int)digits[0] - 48].size(); i++)
            {
                combination.push_back(cor_tab[(int)digits[0] - 48][i]);
                string temp = digits.substr(1);
                letterCombinations_backtracking(temp, res, combination, cor_tab);
                combination.pop_back();
            }
        }
    }
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string> res; string combination; vector<string> cor_tab(10);
        if (digits.empty()) return res;
        cor_tab[0] = " "; cor_tab[1] = "*"; cor_tab[2] = "abc"; cor_tab[3] = "def"; cor_tab[4] = "ghi"; cor_tab[5] = "jkl"; cor_tab[6] = "mno"; cor_tab[7] = "pqrs"; cor_tab[8] = "tuv"; cor_tab[9] = "wxyz";
        letterCombinations_backtracking(digits, res, combination, cor_tab);
        // res.push_back(to_string((int)digits[0]));
        return res;
    }
};