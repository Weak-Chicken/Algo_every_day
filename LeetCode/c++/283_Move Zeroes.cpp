class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        if (nums.size() != 0)
        {
            int zeros = 0; bool zero = false;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i; j < nums.size() - 1 - zeros; j++)
                {
                    if (nums[j] == 0) { int temp = nums[j]; nums[j] = nums[j + 1]; nums[j + 1] = temp; zero = true; }
                }
                zeros++;
                if (!zero) break;
                zero = false;
                if (nums[i] == 0) i--;
            }
        }
    }
};