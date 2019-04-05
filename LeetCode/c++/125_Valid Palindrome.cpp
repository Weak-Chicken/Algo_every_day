class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        string processed = "";
        for (int i = 0; i < s.size(); i++) 
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) processed += s[i];
        int l = 0, r = processed.size() - 1;
        while (l < r)
        {
            if ((processed[l] >= '0' && processed[l] <= '9') || (processed[r] >= '0' && processed[r] <= '9'))
                if (processed[l] != processed[r]) return false;
            if (!(processed[l] == processed[r] || processed[l] == processed[r] + 32 || processed[l] == processed[r] - 32)) return false;
            l++; r--;
        }
        return true;
    }
};