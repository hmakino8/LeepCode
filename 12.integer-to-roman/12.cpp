//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#define rep(i, b) for(int i = 0; i < b; i++)
#define rep2(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		string S;
		int i = 0;

		while (num >= 1000) num -= 1000; S += "M";
		if (num >= 800) {
			int i = (1000-num)/100;
			while (i-- > 0) num -= 100; S += "C";
			S += "M";
			num -= 500;
		}
		else if (num >= 500) {
			S += "D";
			int i = (num-500)/100;
			while (i-- > 0) num -= 100; S += "C";
			num -= 500;
		}
		return S;
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
