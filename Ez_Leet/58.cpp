#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int indexLastLetter = s.length() - 1;

        while (s[indexLastLetter] == ' ')   // Bỏ qua các dấu ' ' trước
            indexLastLetter--;

        for (int i = indexLastLetter; i >= 0; i--) {
            if (s[i] == ' ')
            {
                return indexLastLetter - i;     // Đếm kỳ tự và trả về
            }
        }
        return indexLastLetter + 1; // TH : "a " => return indexLastLetter = 0 + 1
    }
};
int main() {

    system("pause");
    return 0;
}