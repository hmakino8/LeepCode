/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res(2, 0);
		map<int, int> mp;
		int len = nums.size();

		for (int i = 0; i < len; i++) {
			if (mp.find(target - nums[i]) != mp.end()) {
				res[1] = i;
				res[0] = mp[target - nums[i]];
				break ;
			}
			mp[nums[i]] = i;
		}
		return res;
    }
};

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> res(2, 0);
//        for (int i = 0; i < nums.size() - 1; i++) {
//			for (int j = i + 1; j < nums.size(); j++) {
//				if (nums[i] + nums[j] == target) {
//					res[0] = i;
//					res[1] = j;
//					return res;
//				}
//			}
//		}
//		return res;
//    }
//};
// @lc code=end
