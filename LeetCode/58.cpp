#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int left = s.length() - 1;
        int right = s.length() - 1;

        for (int i = s.length() - 1; i >= 0; i--) {
            /* code */
        }

        return lenLastWord;
    }
};

int main() {

    string s;
    getline(cin, s);

    Solution sol;

    cout << sol.lengthOfLastWord(s);

    system("pause");
    return 0;
}