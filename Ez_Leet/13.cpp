#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> mpp = { {'I', 1},  {'V', 5},
                                    {'X', 10} ,{'L',50},
                                    {'C', 100}, {'D', 500},
                                    {'M', 1000} };
        int a = 0;
        int b = 0;
        int sumRoman = 0;
        int i = 0;
        while (i < s.length()) {
            a = mpp[s[i]];
            if (i + 1 < s.length())
                b = mpp[s[i + 1]];
            i++;
            if (a < b)
            {
                sumRoman += b - a;
                i++;
            }
            else
                sumRoman += a;

        }
        return sumRoman;
    }
};

int main() {
    string s;

    cin >> s;

    Solution sol;

    cout << sol.romanToInt(s);
    system("pause");
    return 0;
}