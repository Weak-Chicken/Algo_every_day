class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;
        if (nums.size() <= 2) return res;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int target = -nums[i];
            int l = i + 1, r = nums.size() - 1;
            while(r > l)
            {
                while(r > l && nums[l] + nums[r] < target) l++;
                while(r > l && nums[l] + nums[r] > target) r--;
                if (nums[l] + nums[r] == target && r > l)
                {
                    vector<int> temp_res = {nums[i], nums[l], nums[r]};
                    bool add = true;
                    for (int j = res.size() - 1; j >= 0; j--)
                    {
                        if (res[j] == temp_res)
                        {
                            add = false;
                            break;
                        }
                    }
                    if (add) res.push_back(temp_res);
                    l++;
                    r--;
                }
            }
            
        }
        return res;
    }
};