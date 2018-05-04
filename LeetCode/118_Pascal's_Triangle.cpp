class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        if (numRows == 0) return result;
        
        for (int i = 0; i < numRows; i++)
        {
            vector<int> temp_res;
            temp_res.push_back(1);
            while (temp_res.size() < i + 1)
            {
                if (temp_res.size() == i)
                {
                    temp_res.push_back(1);
                }
                else
                {
                    temp_res.push_back(result[i - 1][temp_res.size() - 1] + result[i - 1][temp_res.size()]);
                }
            }
            result.push_back(temp_res);
        }
        return result;
    }
};