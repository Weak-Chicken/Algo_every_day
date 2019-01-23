class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        
        vector<int>::iterator search_front = nums.begin();
        vector<int>::iterator search_back = nums.begin();
        
        while (search_back + 1 != nums.end())
        {
            search_front = search_back + 1;
            if (*search_back == *search_front)
            {
                nums.erase(search_front);
            }
            else
            {
                search_back++;
            }
        }
        return nums.size();
    }
};