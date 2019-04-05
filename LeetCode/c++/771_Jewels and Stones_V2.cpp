class Solution 
{
public:
    int numJewelsInStones(string J, string S) 
    {
        int counter = 0;
        for (int i = 0; i < S.size(); i++)
        {
            size_t found = J.find(S[i]);
            if (found != std::string::npos) counter++;
        }
        return counter;
    }
};