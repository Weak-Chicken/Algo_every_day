class Solution 
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> res;
        if (nums.size() <= 3) return res;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                int delta = target - nums[i] - nums[j];
                int l = j + 1, r = nums.size() - 1;
                int sum;
                
                while (r > l)
                {
                    sum = nums[r] + nums[l];
                    if (delta > sum)
                    {
                        l++;
                    }
                    else
                    {
                        if (delta < sum)
                        {
                            r--;
                        }
                        else
                        {
                            if (delta == sum)
                            {
                                vector<int> temp_res = {nums[i], nums[j], nums[l], nums[r]};
                                res.push_back(temp_res);
                                while (r > l && nums[l] == temp_res[2]) l++;
                                while (r > l && nums[r] == temp_res[3]) r--;
                            }
                        }
                    }
                }
                while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
            }
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }
        return res;
    }
};