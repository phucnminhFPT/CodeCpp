#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
	public:
		bool canMakeArithmeticProgression(vector<int> arr) {
			int mean = (max - mix ) / (int)( arr.size()-1 );
		}
};

int main() {

	Solution sol;

	int n;
	cin >> n;
	vector <int> arr;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	if (sol.canMakeArithmeticProgression(arr)) {
		cout << "true";
	} else
		cout << "false";

	system("pause");
	return 0;
}