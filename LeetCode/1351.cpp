#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        int rows = grid.size() - 1;
        int cols = grid[0].size() - 1;

        for (int i = 0; i <= rows; i++)
        {
            for (int j = cols; j >= 0; j--)
            {
                if (grid[i][j] > 0)
                {
                    count += cols - j;
                    break;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    return 0;
}