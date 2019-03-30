class Solution 
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        if (A.size() == 0) return A;
        
        for (int i = 0; i < A.size(); i++)
        {
            int mys = (A[i].size() % 2 == 0) ? A[i].size() / 2 : A[i].size() / 2 + 1;
            for (int j = 0; j < mys; j++)
            {
                int temp = A[i][j];
                A[i][j] = (A[i][A[i].size() - 1 - j] == 0) ? 1 : 0;
                A[i][A[i].size() - 1 - j] = (temp == 0) ? 1 : 0;
            }
        }
        
        return A;
    }
};