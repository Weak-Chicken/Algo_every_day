class Solution 
{
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> res;
        for (int i = left; i <= right; i++)
        {
            int i_copy = i;
            bool divisible = true;
            while (i_copy != 0)
            {
                int digit = i_copy % 10;
                i_copy = i_copy / 10;
                if (digit == 0 || i % digit != 0) {divisible = false; break;}
            }
            if (divisible) res.push_back(i);
        }
        return res;
    }
};