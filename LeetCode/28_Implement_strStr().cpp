class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        if (needle.empty()) return 0;
        if (haystack.empty()) return -1;
        if (needle.length() > haystack.length()) return -1;
        int result = -1;
        
        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack[i] == needle[0])
            {
                int temp_i = i + 1;
                int j = 1;
                while (haystack[temp_i] == needle[j] && j < needle.length())
                {
                    temp_i++;
                    j++;
                }
                if (j == needle.length())
                {
                    result = i;
                    break;
                }
            }
        }
        return result;
    }
};
