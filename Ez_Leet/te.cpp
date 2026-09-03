#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s = "";
        int j = 0;
        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i][j] == strs[0][j])
            {
                s += strs[0][j];
                j++;
            }
        }

    }
};

int main() {

    system("pause");
    return 0;
}