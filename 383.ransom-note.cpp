#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
		map<char, int> mp;
		for (auto i : magazine) mp[i]++;
		for (auto i : ransomNote) {
			if (mp[i] > 0) mp[i]--;
			else return false;
		}
		return true;
    }
};

//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        if (magazine.size() < ransomNote.size()) return false;
//		for (int i = 0; i < ransomNote.size(); i++) {
//			int cnt = 0;
//			for (int j = 0; j < magazine.size(); j++) {
//				if (ransomNote[i] == magazine[j]) {
//					cnt++;
//					magazine[j] = '0';
//					break ;
//				}
//			}
//			if (cnt == 0) return false;
//		}
//		return true;
//    }
//};
