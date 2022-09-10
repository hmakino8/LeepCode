//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		map<int, int> mp;
		mp['I'] = 1;
		mp['V'] = 5;
		mp['X'] = 10;
		mp['L'] = 50;
		mp['C'] = 100;
		mp['D'] = 500;
		mp['M'] = 1000;
		int sum = 0;
		rep(i, s.size()) {
			if (i < s.size()-1 && mp[s[i]] < mp[s[i+1]]) {
				sum += mp[s[i+1]] - mp[s[i]];
				i++;
			}
			else {
				sum += mp[s[i]];
			}
		}
		return sum;
	}
};
//
//int main() {
//	Solution S;
//	cout << S.romanToInt("III") << endl;
//	cout << S.romanToInt("LVIII") << endl;
//	cout << S.romanToInt("MCMXCIV") << endl;
//	return 0;
//}
//
