//https://leetcode.com/problems/number-of-squareful-arrays/
class Solution {
public:
    int ans = 0;
    void solve(vector<int> a, int i) {
        // that the pair sum should be equals to a perfect square
        if (i >= 2) {
            int x = a[i - 1] + a[i - 2];
            x = sqrt(x);
            if (x * x != a[i - 1] + a[i - 2]) {
                return;
            }
        }

        if (i == a.size()) {
            ans ++;
            return;
        }

        for (int j = i ; j < a.size() ; j++) {
            if (j == i || a[i] != a[j]) {
                swap(a[i], a[j]);
                solve(a, i + 1);
            }
        }

    }
    int numSquarefulPerms(vector<int>& a) {
        sort(a.begin(), a.end());
        solve(a, 0);
        return ans;
    }
};