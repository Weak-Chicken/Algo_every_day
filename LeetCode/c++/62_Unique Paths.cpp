class Solution 
{
public:
    int uniquePaths(int m, int n) 
    {
        if (m == 0 || n == 0) return 0;
        if (m == 1 || n == 1) return 1;
        
        int whole_map[m][n];
        for (int i = 0; i < m; i++)
        {
            whole_map[i][0] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            whole_map[0][i] = 1;
        }
        
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                whole_map[j][i] = whole_map[j - 1][i] + whole_map[j][i - 1];
            }
        }
        return whole_map[m - 1][n - 1];
    }
};