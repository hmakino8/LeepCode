#include <vector>
using namespace std;

class Solution {
public:
	bool canThreePartsEqualSum(vector<int> &arr) {
		int total = 0, left = 0, mid = 0;
		for (int i = 0; i < arr.size(); i++) total += arr[i];
		for (int i = 0; i < arr.size(); i++) {
			left += arr[i];
			if (left == (total - left) / 2) {
				for (int j = i + 1; j < arr.size()-1; j++) {
					mid += arr[j];
					if (left == mid && mid == total - left - mid) {
						return true;
					}
				}
				mid = 0;
			}
		}
		return false;
	}
};
