#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int x_half_re = 0;

        if (x % 10 == 0 && x != 0)
            return false;

        while (x > x_half_re)
        {
            x_half_re = x_half_re * 10 + x % 10;
            x /= 10;
        }

        return x_half_re == x || x_half_re / 10 == x;
    }
};

int main()
{
    Solution sol;

    int x;
    cin >> x;

    if (sol.isPalindrome(x))
        cout << "True";
    else
        cout << "False";

    system("pause");
    return 0;
}