class Solution 
{
public:
    int numJewelsInStones(string J, string S) 
    {
        int counter = 0;
        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < J.size(); j++)
            {
                if (S[i] == J[j]) {counter++; break;}
            }
        }
        return counter;
    }
};