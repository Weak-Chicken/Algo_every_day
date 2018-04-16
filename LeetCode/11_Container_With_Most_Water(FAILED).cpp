class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        if (height.size() < 2) return 0;
        int result = 0;
        
        for(int i = 0; i < height.size(); i++)
        {
            int right = height.size() - 1;
            while (right > i)
            {
                
                while (right > i && height[right] < height[i]) right--;
                bool left_small;
                int smaller;
                if (height[i] < height[right]) 
                {
                    left_small = true;
                    smaller = height[i];
                } 
                else
                {
                    left_small = false;
                    smaller = height[right];
                }
                int temp_res = (right - i) * smaller;
                if (temp_res > result) result = temp_res;
                
                right--;
                
            }
        }
        
        return result;
    }
};