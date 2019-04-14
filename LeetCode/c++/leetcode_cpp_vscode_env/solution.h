#include "debug_assistant.h"

using namespace std;

class Solution 
{
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        if (matrix.empty() || matrix[0].empty()) return;
        int m = matrix.size(), n = matrix[0].size();
        bool rows[m]; bool cols[n];
        memset(rows, false, m); memset(cols, false, n);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (matrix[i][j] == 0) {rows[i] = true; cols[j] = true;}
        
        cout << "rows: ";
        for (int i = 0; i < matrix.size(); i++)
            cout << rows[i] << " ";
        
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (rows[i] || cols[j]) matrix[i][j] = 0;
    }
};