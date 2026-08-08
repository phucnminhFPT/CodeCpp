#include <iostream>

using namespace std;

class Solution
{
public:
    char processStr(string s, long long k)
    {
        // % : L khong doi
        // * : Tru di 1 ki tu
        // # : gap doi do dai

        long long Final_Len_S = 0;

        // Duyet xuoi de lay chuoi Cur_Length truoc
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                Final_Len_S++;
            else if (s[i] == '*' && Final_Len_S > 0)
                Final_Len_S--;
            else if (s[i] == '#')
                Final_Len_S *= 2;
        }

        if (k + 1 > Final_Len_S)
            return '.';

        // Bắt đầu trừ
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '*')
                Final_Len_S++;
            else if (s[i] == '#')
            {
                if (k + 1 > (Final_Len_S + 1) / 2) // Vì K ở nửa sau nên dùng công thức quy về nửa đầu
                    k -= (Final_Len_S) / 2;

                Final_Len_S = (Final_Len_S + 1) / 2;
            }
            else if (s[i] == '%')
            {
                k = Final_Len_S - 1 - k; // Công thức khi gặp reverse
            }
            else
            {
                if (Final_Len_S == k + 1)
                    return s[i];
                Final_Len_S--;
            }
        }
        return '.';
    }
};

int main()
{

    system("pause");
    return 0;
}