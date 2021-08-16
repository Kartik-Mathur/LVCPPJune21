// https://leetcode.com/problems/combination-sum/
class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& candidates, int target, int s, vector<int> &v) {
        // base case
        if (target == 0) {
            ans.push_back(v);
            return;
        }
        if (target < 0) {
            return;
        }

        // recursive case
        for (int i = s ; i < candidates.size() ; i++) {
            int c = candidates[i];
            if (target >= c) {
                v.push_back(c);
                solve(candidates, target - c, i, v);
                v.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        solve(candidates, target, 0, v);

        return ans;
    }
};