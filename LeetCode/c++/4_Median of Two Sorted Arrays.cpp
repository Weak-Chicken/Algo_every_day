class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int med[2] = {-1, -1}, total_size = nums1.size() + nums2.size(), p1 = 0, p2 = 0, choose = 0;
        if (total_size == 0) return 0;
        // if (total_size == 1) return (nums1.size() == 0) ? nums2[0] : nums1[0];
        while (p1 < nums1.size() && p2 < nums2.size() && p1 + p2 <= total_size / 2)
        {
            if (nums1[p1] < nums2[p2]) {med[choose] = nums1[p1]; p1++; choose = !choose;}
            else {med[choose] = nums2[p2]; p2++; choose = !choose;}
        }
        while (p1 + p2 <= total_size / 2)
        {
            if (p1 < nums1.size()) {med[choose] = nums1[p1]; p1++; choose = !choose;}
            else if (p2 < nums2.size()) {med[choose] = nums2[p2]; p2++; choose = !choose;}
        }
        if (total_size % 2 == 0) return double(med[0] + med[1]) / 2;
        else if (total_size % 2 == 1) return (med[0] > med[1]) ? med[0] : med[1];
        return INT_MIN;
    }
};