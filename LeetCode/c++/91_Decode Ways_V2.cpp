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
            num_0 = num_1 = (s[i] == '0') ? ((s[i - 1] == '1' || s[i - 1] == '2') ? num_0 : 0) : (((s[i - 1] == '1') || (s[i - 1] == '2' && (s[i] <= '6'))) ? (num_2 += num_1) - num_1 : num_2);
            num_2 = (s[i] == '0') ? ((s[i - 1] == '1' || s[i - 1] == '2') ? num_0 : 0) : num_2;
        }
        return num_2;
    }
};