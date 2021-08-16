// Combinations.cpp
// https://leetcode.com/problems/combinations/
class Solution {
public:
	vector<vector<int>> ans;
	void solve(int n, int k, vector<int> &v, int s) {
		// base case
		if (k == 0) {
			ans.push_back(v);
			return;
		}
		if (k < 0) {
			return;
		}
		// recursive case
		for (int i = s; i <= n ; i++) {
			v.push_back(i);
			solve(n, k - 1, v, i + 1);
			v.pop_back();
		}
	}
	vector<vector<int>> combine(int n, int k) {
		vector<int> v;
		solve(n, k, v, 1);
		return ans;
	}
};