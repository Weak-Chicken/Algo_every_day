class Solution 
{
public:
    bool comparingvector(vector<int> v1, vector<int> v2)
    {
        for (int i = 0; i < v2.size(); i++)
        {
            if (!(find(v1.begin(), v1.end(), v2[i]) != v1.end())) return false;
        }
        return true;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        if (nums.size() <= 2) return result;
        
        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        bool eq = false;
                        for (int l = 0; l < result.size(); l++)
                        {
                            vector<int> comparevector = result[l];
                            if (comparingvector(comparevector, temp))
                            {
                                if (comparingvector(temp, comparevector))
                                {
                                    eq = true;
                                    break;
                                }
                            }
                        }
                        if (!eq)
                        result.push_back(temp);
                    }
                }
            }
        }
        return result;
    }
};