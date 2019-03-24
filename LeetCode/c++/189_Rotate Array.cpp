class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        k = k % nums.size();
        if (!(k == 0 || nums.size() == 0))
        {
            vector<int> res;
            vector<int>::iterator my_begin = nums.end() - k;
            res.insert(res.end(), my_begin, nums.end());
            res.insert(res.end(), nums.begin(), my_begin);
            nums = res;
        }
        
    }
};