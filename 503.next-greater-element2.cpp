#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
		vector<int> res(nums.size(), -1);
		vector<int> double_nums = nums;
		for (int i = 0; i < nums.size(); i++) {
			double_nums.push_back(nums[i]);
		}
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < double_nums.size(); j++) {
				if (double_nums[j] > nums[i]) {
					res[i] = double_nums[j];
					break ;
				}
			}
		}
		return res;
    }
};
