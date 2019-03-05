class Solution 
{
public:
    int minDistance(string word1, string word2) 
    {
        int m = word1.size(), n = word2.size();
        if (m == 0) return n;
        if (n == 0) return m;
        
        int men[m][n];
        bool eq = (word1[0] != word2[0]) ? false : true;
        men[0][0] = (word1[0] != word2[0]) ? 1 : 0;
        
        for (int j = 1; j < n; j++)
        {
            men[0][j] = (word1[0] == word2[j] && !eq) ? men[0][j - 1] : men[0][j - 1] + 1;
        }
        eq = false;
        for (int i = 1; i < m; i++)
        { 
            men[i][0] = (word1[i] == word2[0] && !eq) ? men[i - 1][0] : men[i - 1][0] + 1;
            if (word1[i] == word2[0]) eq = true;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (word1[i] == word2[j])
                {
                    men[i][j] = min(men[i - 1][j] + 1, min(men[i][j - 1] + 1, men[i - 1][j - 1]));
                }
                else
                {
                    men[i][j] = min(men[i - 1][j], min(men[i][j - 1], men[i - 1][j - 1])) + 1;
                }
            }
        }
        return men[m - 1][n - 1];
    }
};