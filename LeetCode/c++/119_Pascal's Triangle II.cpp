class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>> results;
        vector<int> temp = {1};
        if (rowIndex == 0) return temp;
        results.push_back(temp);
        temp = {1, 1};
        if (rowIndex == 1) return temp;
        results.push_back(temp);
        
        for(int i = 2; i <= rowIndex; i++)
        {
            vector<int> temp_res;
            temp_res.push_back(1);
            for(int j = 1; j < i; j++)
            {
                temp_res.push_back(results[i - 1][j - 1] + results[i - 1][j]);
            }
            temp_res.push_back(1);
            results.push_back(temp_res);
        }
        return results[rowIndex];
    }
};