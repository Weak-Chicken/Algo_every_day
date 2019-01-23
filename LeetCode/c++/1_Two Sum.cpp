class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> results;
        if (nums.size() < 2)
        {
            return results;
        }
        
        vector<int>ori_nums = nums;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        
        while ((nums[i] + nums[j] != target) && i < j)
        {
            while ((nums[i] + nums[j] < target) && i < j) i++;
            while ((nums[i] + nums[j] > target) && i < j) j--;
            if (nums[i] + nums[j] == target)
            {
                results.push_back(find(ori_nums.begin(), ori_nums.end(), nums[i]) - ori_nums.begin());
                reverse(ori_nums.begin(), ori_nums.end());
                results.push_back(nums.size() - 1 - (find(ori_nums.begin(), ori_nums.end(), nums[j]) - ori_nums.begin()));
                sort(results.begin(), results.end());
                return results;
            }
        }
        
        results.push_back(find(ori_nums.begin(), ori_nums.end(), nums[i]) - ori_nums.begin());
        reverse(ori_nums.begin(), ori_nums.end());
        results.push_back(nums.size() - 1 - (find(ori_nums.begin(), ori_nums.end(), nums[j]) - ori_nums.begin()));
        sort(results.begin(), results.end());
        return results;
    }
};