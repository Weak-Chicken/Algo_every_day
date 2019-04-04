class Solution 
{
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        for (int i = 1; i < triangle.size(); i++)
        {
            int left = INT_MAX, right = INT_MAX;
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (j >= 1) left = triangle[i - 1][j - 1];
                if (j < triangle[i].size() - 1) right = triangle[i - 1][j];
                triangle[i][j] = min(left, right) + triangle[i][j];
            }
        }
        return *min_element(triangle[triangle.size() - 1].begin(), triangle[triangle.size() - 1].end());
    }
};