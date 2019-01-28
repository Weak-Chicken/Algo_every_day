class Solution 
{
public:
    void insert_one_element(vector<int>& nums, int number, int position, int m)
    {
        for (int i = m - 1; i >= position; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[position] = number;
    };
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if (m == 0)
        {
            nums1 = nums2;
        } 
        else
        {
            if (n != 0)
            {
                int nums1_pointer = 0;
                
                for (int i = 0; i < n; i++)
                {
                    while ((nums1[nums1_pointer] < nums2[i]) && nums1_pointer < m) nums1_pointer++;
                    
                    insert_one_element(nums1, nums2[i], nums1_pointer, m);
                    m++;
                }
            }
        }
    }
};