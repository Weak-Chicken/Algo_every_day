class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {       
        int temp;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix[i].size(); j++)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for (int j = 0; j < matrix.size() / 2; j++)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - 1 - j];
                matrix[i][matrix.size() - 1 - j] = temp;
            }
        }
    }
};