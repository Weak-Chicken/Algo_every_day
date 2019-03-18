class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if (x < 0) return false;
        char converted_int[32];
        sprintf(converted_int, "%i", x);
        int i = 0, j = 0;
        while (converted_int[j] <= '9' && converted_int[j] >= '0') j++;
        j--;
        
        while (i < j)
        {
            if (converted_int[i] != converted_int[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};