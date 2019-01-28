/*
Solution from rao0501 on https://leetcode.com/problems/container-with-most-water/discuss/226610/Simple-solution-O(n)-99.61-faster-than-all-submissions
*/

class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int l=0;
        int r = height.size() -1;
        int max_water = 0;
        while(l<r)
        {
            max_water = max(max_water,(r-l)*(height[(height[l] > height[r]) ? r-- : l++]));
        }

            return max_water;

        }
};