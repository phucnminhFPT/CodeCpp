#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long left = 1;
        long long right = x;

        if (x == 0)
            return 0;
        if (x < 4)
            return 1;

        long long mid = 0;
        while (left < right)
        {
            mid = (left + right) / 2;

            if (mid * mid <= x && (mid + 1) * (mid + 1) > x)    // mid^2 ≤x <(mid+1)^2
                return mid;
            else if (mid * mid < x) {
                left = mid + 1;
            }
            else if (mid * mid > x) {
                right = mid - 1;
            }

        }
        return right;
    }
};


int main() {

    int x;
    cin >> x;

    Solution sol;

    cout << sol.mySqrt(x);
    system("pause");
    return 0;
}
