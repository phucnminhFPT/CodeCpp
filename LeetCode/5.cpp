#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        string result = "";
        int longest = -1;
        while (left < right)
        {
            while (left < right && s[left] != s[right])
                result = s.substr(left, right);
            string a = result;
            reverse(a.begin(), a.end());
            int sublength = right - left;
            if ()
            {
                /* code */
            }
            
            if (a == re)
            {
                /* code */
            }
        }

        return "";
    }
};

int main()
{

    return 0;
}