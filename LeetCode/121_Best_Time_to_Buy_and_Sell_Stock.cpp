class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if (prices.empty()) return 0;
        if (prices.size() == 1) return 0;
        int max = 0;
        
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                while(prices[i] > prices[j] && j < prices.size() - 1) j++;
                if (prices[j] - prices[i] > max) max = prices[j] - prices[i];
            }
        }
        
        return max;
    }
};