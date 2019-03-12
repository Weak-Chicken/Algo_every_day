/*
Solution from kun3 on https://leetcode.com/problems/3sum/discuss/7402/Share-my-AC-C%2B%2B-solution-around-50ms-O(N*N)-with-explanation-and-comments
*/
class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> res;
        if (nums.size() <= 2) return res;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++)
        {
            int target = -nums[i];
            int l = i + 1, r = nums.size() - 1;
            int sum;
            while(r > l)
            {
                sum = nums[l] + nums[r];
                if (sum < target)
                {
                    l++;
                }
                else
                {
                    if (sum > target)
                    {
                        r--;
                    }
                    else
                    {
                        if (sum == target)
                        {
                            vector<int> temp_res = {nums[i], nums[l], nums[r]};
                            res.push_back(temp_res);
                            while (r > l && nums[l] == temp_res[1]) l++;
                            while (r > l && nums[r] == temp_res[2]) r--;
                        }
                    }
                }
            }
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }
        return res;
    }
};