class Solution 
{
public:
    vector<int> diStringMatch(string S) 
    {
        int upper = S.size(), lower = 0; vector<int> res(S.size() + 1, -1);
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'I') {res[i] = lower; lower++;}
            else if (S[i] == 'D') {res[i] = upper; upper--;}
        }
        (S[S.size() - 1] == 'I') ? res[S.size()] = lower : res[S.size()] = upper;
        return res;
    }
};