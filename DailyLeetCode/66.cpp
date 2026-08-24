#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 0;

        // Nếu chỉ có 1 chữ số
        if (digits.size() == 1)
        {
            if (digits[0] == 9)
            {
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
                return digits;
            }
            else {
                digits[0]++;
                return digits;
            }
        }

        // Lớn hơn 1 chữ số
        for (int i = digits.size() - 1; i >= 0; i--) {
            /* Xét phần tử cuối*/
            if (i == digits.size() - 1) {
                if (digits[i] != 9) {
                    digits[i]++;
                    return digits;
                }
                else {
                    digits[i] = 0;
                    carry = 1;
                }
            }
            /*Xét các phần tử sau */
            else if (i != digits.size() - 1) {
                if (carry == 1) {
                    if (digits[i] != 9) {
                        digits[i]++;
                        return digits;
                    }
                    else if (digits[i] == 9) {
                        digits[i] = 0;
                        carry = 1;
                    }
                }
            }
        }

        if (carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};

int main() {

    int n;
    cin >> n;
    vector<int> a;
    Solution sol;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector<int> b = sol.plusOne(a);

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    system("pause");
    return 0;
}