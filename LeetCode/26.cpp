#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;

    cout << sol.removeDuplicates(nums);

    system("pause");
    return 0;
}