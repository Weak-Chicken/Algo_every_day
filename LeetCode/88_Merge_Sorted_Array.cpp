class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        nums1 = vector<int>(nums1.begin(), nums1.begin() + m);
        int pos_1 = 0;
        int pos_2 = 0;
        
        while ((pos_1 < m) && (pos_2 < n))
        {
            while ((nums1[pos_1] <= nums2[pos_2]) && (pos_1 < m) && (pos_2 < n)) pos_1++;
            while ((nums1[pos_1] > nums2[pos_2]) && (pos_1 < m) && (pos_2 < n))
            {
                nums1.insert(nums1.begin() + pos_1, nums2[pos_2]);
                pos_2++;
                pos_1++;
                m++;
            }
        }
        
        while (pos_2 < n)
        {
            nums1.insert(nums1.end(), nums2[pos_2]);
            pos_2++;
        }
    }
};