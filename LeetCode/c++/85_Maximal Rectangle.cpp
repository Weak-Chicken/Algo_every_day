class Solution 
{
public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        if (matrix.size() == 0) return 0;
        int m = matrix.size(), n = matrix[0].size(), max_area = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] != '0')
                {
                    int hor = j, ver = i;
                    // Pay extra attention to here, the judgement requirement.
                    // The order cannot be reversed.
                    if (j < n - 1) while (hor < n - 1 && matrix[i][hor + 1] == '1') hor++;
                    max_area = max(max_area, hor + 1 - j);
                    if (i < m - 1) while (ver < m - 1 && matrix[ver + 1][j] == '1') ver++;
                    max_area = max(max_area, ver + 1 - i);
                    for (int it_ver = i + 1; it_ver <= ver; it_ver++)
                    {
                        if ((it_ver - i + 1) * (n - j + 1) < max_area) continue;
                        for(int it_hor = j + 1; it_hor <= hor; it_hor++)
                        {
                            if ((it_ver - i + 1) * (it_hor - j + 1) < max_area) continue;
                            if (it_hor > j && it_ver > i && matrix[it_ver][it_hor] == '1')
                            {
                                bool non_one = false;
                                for (int k = i; k <= it_ver; k++)
                                {
                                    for (int l = j; l <= it_hor; l++)
                                    {
                                        if (matrix[k][l] != '1') {non_one = true; break;};
                                    }
                                    if (non_one) break;
                                }
                                if (!non_one) max_area = max(max_area, (it_ver - i + 1) * (it_hor - j + 1));
                            }
                        }
                    }
                }
            }
        }
        return max_area;
    }
};