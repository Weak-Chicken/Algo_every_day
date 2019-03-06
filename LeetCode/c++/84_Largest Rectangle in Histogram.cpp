class Solution 
{
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        if (heights.size() == 0) return 0;
        
        int dp[heights.size()];
        int min_val[heights.size()];
        int max_rec = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
        {
            dp[i] = heights[i];
            min_val[i] = heights[i];
            max_rec = max(max_rec, heights[i]);
            int j = i;
            while (j > 0)
            {
                j--;
                if (min_val[j] > heights[i])
                {
                    min_val[j] = heights[i];
                    dp[j] = min_val[j] * (i - j + 1);
                }
                else
                {
                    dp[j] += min_val[j];
                }
                max_rec = max(max_rec, dp[j]);
            }
        }
        return max_rec;
    }
};