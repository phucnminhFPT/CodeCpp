#include <iostream>

using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int isOrginX = 0;
        int isOrginY = 0;
        for (char c : moves)
        {
            switch (c)
            {
            case 'U':
                isOrginY++;
                break;
            case 'D':
                isOrginY--;
                break;
            case 'R':
                isOrginX++;
                break;
            case 'L':
                isOrginX--;
                break;
            }
        }
        return (isOrginX == 0 && isOrginY == 0) ? true : false;
    }
};

int main()
{
    Solution sol;

    string moves;
    cin >> moves;

    bool kq = sol.judgeCircle(moves);
    return 0;
}