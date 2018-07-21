class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if (prices.empty()) return 0;
        if (prices.size() == 1) return 0;
        int max = prices[0];
        int min = prices[0];
        int res = 0;
        
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
                max = prices[i];
            }
            else
            {
                if (prices[i] > max)
                {
                    max = prices[i];
                }
            }
            if (max - min > res)
            {
                res = max - min;
            }
        }
        
        return res;
    }
};