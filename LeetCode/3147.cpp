#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int maximumEnergy(vector<int> &energy, int k)
    {
        int maxEn = -10000;
        int n = energy.size();

        for (int i = n - k - 1; i >= 0; i--)
            energy[i] += energy[i + k];

        for (int i = 0; i < n; i++)
            maxEn = max(maxEn, energy[i]);

        return maxEn;
    }
};
int main()
{

    system("pause");
    return 0;
}