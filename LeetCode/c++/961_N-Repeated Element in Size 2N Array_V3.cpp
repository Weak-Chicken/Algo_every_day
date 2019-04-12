class Solution 
{
public:
    int repeatedNTimes(vector<int>& A) 
    {
        vector<int> repe;
        if (A.empty()) return 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (find(repe.begin(), repe.end(), A[i]) != repe.end()) return A[i];
            else repe.push_back(A[i]);
        }
        return -1;
    }
};