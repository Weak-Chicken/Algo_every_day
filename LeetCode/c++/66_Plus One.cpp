class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int pluser = digits.size() - 1;
        digits[pluser]++;
        bool forward = false;
        while (pluser >= 0)
        {
            if (forward) 
            {
                digits[pluser]++;
                forward = false;
            }
            if (digits[pluser] > 9)
            {
                digits[pluser] -= 10;
                forward = true;
            }
            pluser--;
        }
        if (forward)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};