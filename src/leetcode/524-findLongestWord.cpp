#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;

class Solution {
public:
	// 524. 通过删除字母匹配到字典里最长单词
	string findLongestWord(string s, vector<string>& dictionary) {
		int n = dictionary.size();
		sort(dictionary.begin(), dictionary.end(), [](string s1, string s2) {
			if (s1.size() != s2.size()) {
				return s1.size() > s2.size();
			}
			return s1 < s2;
		});
		for (int i = 0; i < n; i++) {
			int p = 0, q = 0;
			while ((p < s.size()) && (q < dictionary[i].size())) {
				if (s[p] == dictionary[i][q]) {
					q++;
				}
				p++;
			}
			if (q == dictionary[i].size()) {
				return dictionary[i];
			}
		}
		return "";
	}
};

//int main() {
//
//	// findLongestWord============
//	Solution slo;
//	srand((int)time(0));
//	int n = rand() % 23 + 1;
//	cout << n << endl;
//	vector<string> dictionary;
//	for (int i = 0; i < n; i++) {
//		string currS = "";
//		int sLen = rand() % 11 + 1;
//		for (int j = 0; j < sLen; j++) {
//			currS += (rand() % 26 + 'a');
//		}
//		dictionary.push_back(currS);
//	}
//	for (auto value : dictionary) {
//		cout << value << ", ";
//	}
//	cout << endl;
//	string s = "";
//	int sLen = rand() % 31 + 1;
//	for (int j = 0; j < sLen; j++) {
//		s += (rand() % 26 + 'a');
//	}
//	string res = slo.findLongestWord(s, dictionary);
//	cout << s << ", " << res << endl;
//	// ============findLongestWord
//
//	return 0;
//}