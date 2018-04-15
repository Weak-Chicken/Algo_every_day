// Inspired by kun3 on leetcode. https://leetcode.com/problems/3sum/discuss/7402/Share-my-AC-C++-solution-around-50ms-O(N*N)-with-explanation-and-comments

class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        if (nums.size() <= 2) return result;
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int target = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            
            while (front < back)
            {
                int sum_of_nums = nums[front] + nums[back];
                if (sum_of_nums < target)
                {
                    front++;
                }
                else
                {
                    if (sum_of_nums > target)
                    {
                        back--;
                    }
                    else
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[front]);
                        temp.push_back(nums[back]);
                        result.push_back(temp);
                        
                        while ((front < back) && nums[front] == temp[1]) front++;
                        while ((front < back) && nums[back] == temp[2]) back--;
                    }
                }
            }
            
            while ((i + 1 < nums.size()) && nums[i] == nums[i + 1]) i++;
            
        }
        
        return result;
    }
};