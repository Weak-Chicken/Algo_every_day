/*
Solution from anton4 on https://leetcode.com/problems/largest-rectangle-in-histogram/discuss/28902/5ms-O(n)-Java-solution-explained-(beats-96)
*/
class Solution 
{
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        if (heights.size() == 0) return 0;
        int left_boundary[heights.size()], right_boundary[heights.size()];
        int max_area = 0;
        left_boundary[0] = -1; right_boundary[heights.size() - 1] = heights.size();
        
        for (int i = 1; i < heights.size(); i++)
        {
            int p = i - 1;
            while (p >= 0 && heights[p] >= heights[i]) p = left_boundary[p];
            left_boundary[i] = p;
        }
        for (int i = heights.size() - 2; i >= 0; i--)
        {
            int p = i + 1;
            while (p < heights.size() && heights[p] >= heights[i]) p = right_boundary[p];
            right_boundary[i] = p;
        }
        
        for (int i = 0; i < heights.size(); i++)
        {
            max_area = max((right_boundary[i] - left_boundary[i] - 1) * heights[i], max_area);
        }
        return max_area;
    }
};