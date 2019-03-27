class Solution 
{
public:
    vector<string> letterCombinations(string digits) 
    {
        vector<string> cor_tab(10); vector<string> dp;
        if (digits.empty()) return dp;
        cor_tab[0] = " "; cor_tab[1] = "*"; cor_tab[2] = "abc"; cor_tab[3] = "def"; cor_tab[4] = "ghi"; cor_tab[5] = "jkl"; cor_tab[6] = "mno"; cor_tab[7] = "pqrs"; cor_tab[8] = "tuv"; cor_tab[9] = "wxyz";
        for (int i = 0; i < cor_tab[(int)digits[0] - 48].size(); i++) 
        {
            string temp(1, cor_tab[(int)digits[0] - 48][i]);
            dp.push_back(temp);
        }
        for (int i = 1; i < digits.size(); i++)
        {
            vector<string> temp_dp = dp;
            for (int k = 1; k < cor_tab[(int)digits[i] - 48].size(); k++)
            {
                dp.insert(dp.end(), temp_dp.begin(), temp_dp.end());
            }
            sort(dp.begin(), dp.end()); //Useless here. However without it cannot pass the stupid test cases.
            int j = 0;
            while (j < dp.size())
            {
                for (int k = 0; k < cor_tab[(int)digits[i] - 48].size(); k++)
                {
                    dp[j] += cor_tab[(int)digits[i] - 48][k];
                    j++;
                }
            }
        }
        return dp;
    }
};