class Solution 
{
public:
    int repeatedNTimes(vector<int>& A) 
    {
        bool bruteforce[10000]; memset(bruteforce, false, 10000);
        if (A.empty()) return 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (!bruteforce[A[i]]) bruteforce[A[i]] = true;
            else if (bruteforce[A[i]]) return A[i];
        }
        return -1;
    }
};