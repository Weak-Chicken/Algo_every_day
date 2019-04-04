#include "debug_assistant.h"

using namespace std;

class Solution 
{
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        for (int i = 1; i < triangle.size(); i++)
        {
            int left = INT_MAX, right = INT_MAX;
            for (int j = 0; j < triangle[i].size(); j++)
            {
                cout << "j | i | triangle[i].size()" << j << " | " << i << " | " << triangle[i].size() << endl;
                if (j > 0) {left = triangle[i - 1][j - 1]; cout << "left | j" << left << "|" << j << endl;}
                if (j < triangle[i].size() - 1) {right = triangle[i - 1][j]; cout << "right | j" << right << "|" << j << endl;}
                cout << "choose | " << min(left, right) << endl;
                triangle[i][j] = min(left, right) + triangle[i][j];
            }
        }
        return *min_element(triangle[triangle.size() - 1].begin(), triangle[triangle.size() - 1].end());
    }
};