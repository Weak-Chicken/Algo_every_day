class Solution
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> result;
        if (nums.size() <= 3) return result;
        
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                int front = j + 1;
                int back = nums.size() - 1;
                int mytarget = target-(nums[i] + nums[j]);
                
                while (front < back)
                {
                    int sum = nums[front] + nums[back];
                    if (sum < mytarget)
                    {
                        front++;
                    }
                    else
                    {
                        if (sum > mytarget)
                        {
                            back--;
                        }
                        else
                        {
                            vector<int> temp;
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[front]);
                            temp.push_back(nums[back]);
                            result.push_back(temp);
                            
                            while (nums[front] == temp[2]) front++;
                            while (nums[back] == temp[3]) back--;
                        }
                    }
                }
                
                while (j < nums.size() - 2 && nums[j] == nums[j + 1]) j++;
            }
            while (i < nums.size() - 2 && nums[i] == nums[i + 1]) i++;
        }
        return result;
    }
};