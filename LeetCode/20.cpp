#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> stk;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            switch (c)
            {
            case '(': case '[': case '{':
                stk.push(c);
                break;
            case '}':
                if (stk.empty() == true || stk.top() != '{')
                stk.pop();
                break;
            case ')':
                if (stk.empty() == true || stk.top() != '(')
                    return false;
                stk.pop();
                break;
            case ']':
                if (stk.empty() == true || stk.top() != '[')
                    return false;
                stk.pop();
                break;
            }
        }
        return stk.empty();
    }
};

int main() {

    system("pause");
    return 0;


}