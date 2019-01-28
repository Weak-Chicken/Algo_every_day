class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        if (height.size() < 2) return 0;
        if (height.size() == 2)
        {
            int main_height = (height[0] > height[1]) ?  1 : 0;
            return height[main_height];
        }
        
        int max = 0;
        
        for (int i = 0; i < height.size() - 1; i++)
        {
            int p1 = i;
            int p2 = height.size() - 1;
            int main_height;
            main_height = (height[p1] > height[p2]) ?  p2 : p1;
            int local_max = height[main_height] * (p2 - p1);
            
            if (height[p1] > height[p2])
            {
                while (p1 < p2)
                {
                    int hook = p2;
                    p2--;
                    while (height[p2] <= height[hook] && p1 < p2) p2--;
                    if (p1 < p2)
                    {
                        main_height = (height[p1] > height[p2]) ?  p2 : p1;
                        int temp_max = height[main_height] * (p2 - p1);
                        if (temp_max > local_max) local_max = temp_max;
                        if (height[p2] >= height[p1])
                        {
                            p2 = p1;
                            break;
                        }
                        else
                        {
                            hook = p2;
                        }
                    }
                }
            }

            if (local_max > max) max=local_max;
        }
        
        return max;
    }
};