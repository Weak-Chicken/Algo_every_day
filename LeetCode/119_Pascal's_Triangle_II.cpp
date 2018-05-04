class Solution 
{
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> result;
        result.push_back(1);
        
        for (int i = 0; i <= rowIndex; i++)
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
                    temp_res.push_back(result[temp_res.size() - 1] + result[temp_res.size()]);
                }
            }
            result = temp_res;
        }
        return result;
    }
};