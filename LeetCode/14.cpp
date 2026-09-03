#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";

        string s = "";

        for (int i = 0; i < strs[0].length(); i++)
            for (int j = 1; j < strs.size(); j++)
                if (i >= strs[j].length() || strs[0][i] != strs[j][i]) {
                    s = strs[0].substr(0, i);
                    return s;
                }

        return s = strs[0].substr(0, strs[0].length() - 1);
    }
};

int main() {

    system("pause");
    return 0;
}