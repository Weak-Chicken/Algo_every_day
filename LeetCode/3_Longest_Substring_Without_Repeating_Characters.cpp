class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        string searched;
        int counter = 0;
        int max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < searched.size(); j++)
            {
                if (searched[j] == s[i])
                {
                    if (counter > max)
                    {
                        max = counter;
                    }
                    searched.erase(0, j+1);
                    counter = searched.size();
                    break;
                }
            }
            counter++;
            searched.insert(searched.end(),s[i]);
        }
        if (counter > max)
        {
            max = counter;
        }
        return max;
    }
};