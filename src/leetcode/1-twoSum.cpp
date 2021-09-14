#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

class Solution {
public:
	// 1. 两数之和
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hashmap;
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			auto it = hashmap.find(target - nums[i]);
			if (it != hashmap.end()) {
				// return {hashmap[nums[i]], i};
				return { it->second, i };
			}
			hashmap[nums[i]] = i;
		}
		return { -1, -1 };
	}
};

//int main() {
//
//	// twoSum============
//	Solution slo;
//	srand((int)time(0));
//	int n = rand() % 217 + 1;
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		int currNum = rand() % 1001;
//		v.push_back(currNum);
//	}
//	for (auto value : v) {
//		cout << value << ",";
//	}
//	cout << endl;
//	vector<int> res;
//	res = slo.twoSum(v, 100);
//	for (auto value : res) {
//		cout << value << ",";
//	}
//	// ============twoSum
//
//	return 0;
//}