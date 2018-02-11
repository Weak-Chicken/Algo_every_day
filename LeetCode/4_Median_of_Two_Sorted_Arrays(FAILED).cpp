class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double size = (double)(nums1.size() + nums2.size()) / 2;
        if (nums2.empty())
        {
            if (nums1.size() % 2 == 0)
            {
                return (double)(nums1[(int)size - 1] + nums1[(int)size]) / 2;
            }
            else
            {
                return nums1[(int)(size - 0.5)];
            }
        }
        else
        {
            if (nums1.empty())
            {
                if (nums2.size() % 2 == 0)
                {
                    return (double)(nums2[(int)size - 1] + nums2[(int)size]) / 2;
                }
                else
                {
                    return nums2[(int)(size - 0.5)];
                }
            }
        }
        
        vector<int>::iterator iter_1 = nums1.begin();
        vector<int>::iterator iter_2 = nums2.begin();
        bool finish_1 = false;
        bool finish_2 = false;
        int counter = 1;
        int res[2] {0,0};
        
        
        while (counter < size)
        {
            counter++;
            if (*iter_1 < *iter_2)
            {
                if (iter_1 == nums1.end() - 1)
                {
                    iter_2++;
                    finish_1 = true;
                }
                else
                {
                    iter_1++;
                }
            }
            else if (*iter_1 > *iter_2)
            {
                if (iter_2 == nums2.end() - 1)
                {
                    iter_1++;
                    finish_2 = true;
                }
                else
                {
                    iter_2++;
                }
            }
            else
            {
                if (*(iter_1+1) < *(iter_2+1))
                {
                    if (iter_1 == nums1.end() - 1)
                    {
                        iter_2++;
                        finish_1 = true;
                    }
                    else
                    {
                        iter_1++;
                    }
                }
                else
                {
                    
                }
            }
        }
        
        if ((finish_1 && finish_2) || (!finish_1 && !finish_2))
        {
            if (counter == size)
            {
                res[0] = *iter_1;
                res[1] = *iter_2;
            }
            else
            {
                (*iter_1 < *iter_2) ? res[1] = *iter_1 : res[1] = *iter_2;
            }
        }
        else
        {
            if(finish_1)
            {
                if (counter == size)
                {
                    res[0] = *iter_2;
                    res[1] = *(iter_2 + 1);
                }
                else
                {
                    res[1] = *iter_2;
                }
            }
            else if (finish_2)
            {
                if (counter == size)
                {
                    res[0] = *iter_1;
                    res[1] = *(iter_1 + 1);
                }
                else
                {
                    res[1] = *iter_1;
                }
            }
        }

        if (res[0] == 0)
        {
            return res[1];
        }
        else
        {
            return (double)(res[0] + res[1]) / 2;
        }
    }
};