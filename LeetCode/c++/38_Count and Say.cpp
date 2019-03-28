class Solution 
{
public:
    string countAndSay(int n) 
    {
        if (n <= 0) return "";
        string res = "1";
        for (int i = 1; i < n; i++)
        {
            string this_time = ""; int same = 1; int j = 0;
            for (int j = 0; j < res.size(); j++)
            {
                while (j < res.size() - 1 && res[j] == res[j + 1]) {same++; j++;}
                this_time += to_string(same); this_time += res.substr(j, 1);
                same = 1;
            }
            res = this_time;
        }
        return res;
    }
};