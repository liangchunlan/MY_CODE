class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hashmap;
		int n = nums.size();
		for (int i = 0; i < n; i++) {
			auto it = hashmap.find(target - nums[i]);
			if (it != hashmap.end()) {
				// return {hashmap[nums[i]], i};
			}
			hashmap[nums[i]] = i;
		}
		return {};
	}
};