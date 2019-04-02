class Solution 
{
public:
    vector<string> restoreIpAddresses(string s) 
    {
        vector<string> res;
        if (s.size() < 4 || s.size() > 12) return res;
        // if (s[0] > '2') return res;
        for (int i = 0; i < 3; i++)
        {
            if (s.size() - (i + 1) > 9) continue;
            int temp = atoi(s.substr(0, i + 1).c_str());
            if (temp > 255) continue;
            if (to_string(temp) != s.substr(0, i + 1)) continue;
            for (int j = i + 1; j < i + 4; j++)
            {
                if (s.size() - (i + 1) - (j - i) > 6) continue;
                temp = atoi(s.substr(i + 1, j - i).c_str());
                if (temp > 255) continue;
                if (to_string(temp) != s.substr(i + 1, j - i)) continue;
                for (int k = j + 1; k < j + 4; k++)
                {
                    if (s.size() - (i + 1) - (j - i) - (k - j) > 3) continue;
                    if (k >= s.size() - 1) break;
                    temp = atoi(s.substr(j + 1, k - j).c_str());
                    if (temp > 255) continue;
                    if (to_string(temp) != s.substr(j + 1, k - j)) continue;
                    temp = atoi(s.substr(k + 1, s.size() - k).c_str());
                    if (temp > 255) continue;
                    if (to_string(temp) != s.substr(k + 1, s.size() - k)) continue;
                    res.push_back(s.substr(0, i + 1) + "." + s.substr(i + 1, j - i) + "." + s.substr(j + 1, k - j) + "." + s.substr(k + 1, s.size() - k));
                }
            }
        }
        return res;
    }
};