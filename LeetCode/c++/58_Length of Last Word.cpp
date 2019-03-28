class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        if (s.size() <= 0) return 0;
        int counter = 0; int res = 0;
        for (int i  = 0; i < s.size(); i++)
        {
            if (s[i] != ' ') counter++;
            else {res = counter; counter = 0;}
            if (s[i] == ' ')
            {
                while (i < s.size() && s[i] == ' ') i++;
                i--;
            }
        }
        return (counter == 0) ? res : counter;
    }
};