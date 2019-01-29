class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if (prices.size() == 0) return 0;
        
        int my_max = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            int temp_max = 0;
            for (int j = i + 1; j < prices.size(); j++)
            {
                while (prices[j] < prices[i] && j < prices.size() - 1) j++;
                if (prices[i] < prices[j]) temp_max = max(temp_max, prices[j] - prices[i]);
            }
            my_max = max(my_max, temp_max);
        }
        return my_max;
    }
};