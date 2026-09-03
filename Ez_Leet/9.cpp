#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x % 10 == 0 && x != 0)
            return 0;

        if (x > 0 && x < 10)
            return 1;

        int half = 0;

        while (half < x)
        {
            half = half * 10 + x % 10;
            x /= 10;
        }

        return (half == x) || (half / 10 == x);
    }
};

int main() {

    system("pause");
    return 0;
}