class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        if (needle.size() == 0) return 0;
        if (haystack.size() == 0) return -1;
        
        for (int i = 0; i < haystack.size(); i++)
        {
            while (i < haystack.size() && haystack[i] != needle[0]) i++;
            if (i < haystack.size())
            {
                bool eq = true;
                for (int j = 0; j < needle.size(); j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        eq = false;
                        break;
                    }
                }
                if (eq) return i;
            }
        }
        return -1;
    }
};