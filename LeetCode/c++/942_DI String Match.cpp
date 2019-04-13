class Solution 
{
public:
    vector<int> diStringMatch(string S) 
    {
        int upper = S.size(), lower = 0; vector<int> res;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'I') {res.push_back(lower); lower++;}
            else if (S[i] == 'D') {res.push_back(upper); upper--;}
        }
        (S[S.size() - 1] == 'I') ? res.push_back(lower) : res.push_back(upper);
        return res;
    }
};
