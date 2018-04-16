class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        bool ten = false;
        digits[digits.size() - 1]++;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (ten)
            {
                digits[i]++;
                ten = false;
            }
            if (digits[i] > 9)
            {
                digits[i] -= 10;
                ten = true;
            }
        }
        if (ten)
        {
            digits.insert(digits.begin(), 1, 1);
        }
        return digits;
    }
};