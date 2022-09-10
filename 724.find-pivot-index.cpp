#include <vector>
using namespace std;

class Solution {
public:
	int pivotIndex(vector<int> &nums) {
		int sum = 0, left = 0;
		for (int i = 0; i < nums.size(); i++) sum += nums[i];
		for (int i = 1; i < nums.size(); i++) {
			if (left == sum - (left + nums[i])) return i;
			left += nums[i];
		}
		return -1;
	}
};

//class Solution {
//public:
//	int pivotIndex(vector<int> &nums) {
//		for (int i = 0; i < nums.size(); i++) {
//			if (i == 0) {
//				int sum = 0;
//				for (int j = 1; j < nums.size(); j++) {
//					sum += nums[j];
//				}
//				if (sum == 0) {
//					return 0;
//				}
//				else {
//					continue ;
//				}
//			}
//			int left = 0;
//			int right = 0;
//			for (int j = 0; j < i; j++) {
//				left += nums[j];
//			}
//			for (int k = nums.size()-1; k > i; k--) {
//				right += nums[k];
//			}
//			if (left == right) {
//				return i;
//			}
//		}
//		return -1;
//	}
//};
//
