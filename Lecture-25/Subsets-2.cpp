// Subsets - 2.cpp
// https://leetcode.com/problems/subsets-ii/
class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &a, int s, vector<int> &v) {
		ans.push_back(v);
		if (s == a.size()) {
			return;
		}

		for (int i = s; i < a.size() ; i++) {
			if (i == s || a[i] != a[i - 1]) {
				v.push_back(a[i]);
				solve(a, i + 1, v);
				v.pop_back();
			}
		}
	}

	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> v;
		sort(nums.begin(), nums.end());
		solve(nums, 0, v);
		return ans;
	}
};