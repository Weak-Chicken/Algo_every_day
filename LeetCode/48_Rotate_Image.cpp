class Solution 
{
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        for (int i = 0; i < matrix.size() / 2; i++)
        {
            vector<int> temp = matrix[i];
            matrix[i] = matrix[matrix.size() - 1 - i];
            matrix[matrix.size() - 1 - i] = temp;
        }
        
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix[i].size(); j++)
            {
                int temp_int = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp_int;
            }
        }
    }
};