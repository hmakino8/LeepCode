//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

class Solution {
public:
	vector<int> runningSum(vector<int> &nums) {
		rep2(i, 1, nums.size()) nums[i] += nums[i-1];
		return nums;
	}
};
