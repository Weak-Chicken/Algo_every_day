class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        if (height.size() < 2) return 0;
        
        int left = 0;
        int right = height.size() - 1;
        int result = (right - left) * ((height[left] > height[right]) ? height[right] : height[left]);
        
        while (left < right)
        {
            int det = 0;
            if (height[left] > height[right])
            {
                right--;
                while ((height[left] > height[right]) && (left < right - 1) && (height[right + 1] > height[right])) right--;
            }
            else
            {
                left++;
                while ((height[left] <= height[right]) && (left < right - 1) && (height[left - 1] > height[left])) left++;
            }
            (height[left] > height[right]) ? det = height[right] : det = height[left];
            int temp_res = (right - left) * det;
            if (temp_res > result) result = temp_res;
            if (left >= right - 1) return result;
        }
    }
};