class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> results;
        if (numRows == 0) return results;
        vector<int> temp = {1};
        results.push_back(temp);
        if (numRows == 1) return results;
        temp = {1, 1};
        results.push_back(temp);
        if (numRows == 2) return results;
        
        for(int i = 2; i < numRows; i++)
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
        return results;
    }
};