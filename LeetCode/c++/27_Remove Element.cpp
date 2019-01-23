class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if (nums.size() == 0) return 0;
        
        vector<int>::iterator search = nums.begin();
        
        while (search != nums.end())
        {
            if (*search == val)
            {
                search = nums.erase(search);
            } 
            else
            {
                search++;
            }
        }
        return nums.size();
    }
};