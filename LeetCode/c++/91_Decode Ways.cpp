class Solution 
{
public:
    int numDecodings(string s) 
    {
        if (s.size() == 0) return 0;
        if (s[0] == '0') return 0;
        int num_0 = 1, num_1 = 1, num_2 = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '1' || s[i - 1] == '2')
                {
                    num_2 = num_0;
                    num_1 = num_0;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if ((s[i - 1] == '1') || (s[i - 1] == '2' && (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6')))
                {
                    num_1 = (num_2 += num_1) - num_1;
                }
                else
                {
                    num_1 = num_2;
                }
            }
            num_0 = num_1;
        }
        return num_2;
    }
};