/*
Special thanks to FengXu, who provided this idea 9 years ago and helped us obtained FIRST PLACE in Pascal coding competition.
*/
class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> res;
        if (nums.empty()) return res;
        bool nums_bool[nums.size()];
        memset(nums_bool,false,sizeof(nums_bool));
        
        for (int i = 0; i < nums.size(); i++) nums_bool[nums[i] - 1] = true;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!nums_bool[i]) res.push_back(i + 1);
        }
        return res;
    }
};