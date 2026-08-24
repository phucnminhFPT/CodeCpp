#include <iostream>

using namespace std;

class Solution
{
public:
    char processStr(string s, long long k)
    {
        long long lenS = 0;
        /*  If the letter is a lowercase English letter append it to result.
            '*' ：removes the last character from result, if it exists.
            '#' ：duplicates the current result and appends it to itself.
            '%' ：reverses the current result.
        */

        // Forward traversing to find last length of lenS
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                if (lenS > 0)
                    lenS--;
            }

            else if (s[i] == '#')
                lenS *= 2;
            else if (s[i] == '%')
                continue;
            else
                lenS++;
        }

        if (k < 0 || k + 1 > lenS) // If K is index also lenS too
            return '.';

        // Reverse traversing to decrease k belong to lenS == k or not

        /*  If the letter is a lowercase English letter append it to result.
            '*' ：removes the last character from result, if it exists.
            '#' ：duplicates the current result and appends it to itself.
            '%' ：reverses the current result.
        */
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '*')
            {
                lenS++;
            }
            else if (s[i] == '#')
            {
                long long half = (lenS + 1) / 2;
                if (k + 1 > half / 2) // Nếu k nằm ở nửa sau thì đưa k về nửa đầu
                    k -= lenS / 2;
                lenS = half / 2;
            }

            else if (s[i] == '%')
            {
                k = lenS - 1 - k;
            }
            else
            {
                if (k == lenS - 1)
                    return s[i];
                lenS--;
            }
        }
        return '.';
    }
};

int main()
{
    Solution sol;
    string s;
    long long k = 0;
    cin >> s >> k;
    char re = sol.processStr(s, k);

    cout << re;
    system("pause");
    return 0;
}