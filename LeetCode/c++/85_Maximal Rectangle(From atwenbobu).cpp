/*
Solution from atwenbobu on https://leetcode.com/problems/maximal-rectangle/discuss/29055/My-java-solution-based-on-Maximum-Rectangle-in-Histogram-with-explanation
*/
class Solution 
{
private:
    void dpOneLine(int dp[], int size, vector<char> addee)
    {
        for (int i = 0; i < size; i++)
        {
            if (addee[i] == '1') dp[i]++;
            if (addee[i] == '0') dp[i] = 0;
        }
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        if (matrix.size() == 0) return 0;
        int dp_size = matrix[0].size();
        int max_area = 0, dp[dp_size];
        for (int i = 0; i < dp_size; i++) dp[i] = 0;
        for (int i = 0; i < matrix.size(); i++)
        {
            dpOneLine(dp, dp_size, matrix[i]);
            int left_boundary[dp_size], right_boundary[dp_size];
            left_boundary[0] = -1; right_boundary[dp_size - 1] = dp_size;
            for (int j = 1; j < dp_size; j++)
            {
                int p = j - 1;
                while (p >= 0 && dp[p] >= dp[j]) p = left_boundary[p];
                left_boundary[j] = p;
            }
            for (int j = dp_size - 2; j >= 0; j--)
            {
                int p = j + 1;
                while (p <= dp_size - 1 && dp[p] >= dp[j]) p = right_boundary[p];
                right_boundary[j] = p;
            }
            for (int j = 0; j < dp_size; j++)
            {
                max_area = max((right_boundary[j] - left_boundary[j] - 1) * dp[j], max_area);
            }
        }
        return max_area;
    }
};