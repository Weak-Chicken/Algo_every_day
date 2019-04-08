class Solution 
{
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        vector<string> res;
        for (int i = 0; i < emails.size(); i++)
        {
            size_t found = emails[i].find('+'); size_t at = emails[i].find('@');
            if (found != std::string::npos) emails[i] = emails[i].substr(0, found) + emails[i].substr(at);
            found = emails[i].find('.');
            at = emails[i].find('@');
            while (found != std::string::npos && found < at) 
            {
                emails[i].replace(found, 1, "");
                found = emails[i].find('.');
                at = emails[i].find('@');
            }
            int j = 0;
            while (j < res.size()) {if (res[j] == emails[i]) break; j++;}
            if (j == res.size()) res.push_back(emails[i]);
        }
        return (int) (res.size());
    }
};