#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;

        int i = a.length() - 1;
        int j = b.length() - 1;
        string result = "";
        while (i >= 0 || j >= 0 || carry == 1) {

            // lay bit A
            int A = 0;
            int B = 0;
            if (i >= 0)
                A = a[i] - '0';
            if (j >= 0)
                B = b[j] - '0';

            int C = carry;
            int sum = A ^ B ^ C;
            carry = ((A ^ B) & C) | (A & B);

            result.push_back(sum + '0');

            i--;
            j--;
        }

        reverse(result.begin(), result.end());

        return result;
    }

};

int main() {
	Solution sol;
	
	string a,b;
	
	cin >> a >>b;
	
	cout << sol.addBinary(a, b); 
    system("pause");
    return 0;
}