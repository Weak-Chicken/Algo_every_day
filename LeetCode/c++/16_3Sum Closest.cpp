class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int res_sum = 0, min_diff = INT_MAX;
        if (nums.size() <= 2) return res_sum;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++)
        {
            int closest = target - nums[i];
            int l = i + 1, r = nums.size() - 1;
            int sum;
            while(r > l)
            {
                sum = nums[l] + nums[r];
                if (closest - sum > 0)
                {
                    l++;
                }
                else
                {
                    if (closest - sum < 0)
                    {
                        r--;
                    }
                    else
                    {
                        if (closest - sum == 0)
                        {
                            return target;
                        }
                    }
                }
                if (abs(closest - sum) < min_diff)
                {
                    min_diff = abs(closest - sum);
                    res_sum = sum + nums[i];
                }
            }
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }
        return res_sum;
    }
};