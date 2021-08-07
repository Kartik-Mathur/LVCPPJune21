class Solution {
public:// https://leetcode.com/problems/palindrome-partitioning/
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        vector<string> curr_ans;
        solve(s, curr_ans, 0);
        return ans;
    }

    void solve(string &s, vector<string> &curr_ans, int start) {
        // base case
        if (start == s.length()) {
            ans.push_back(curr_ans);
        }

        // recursive case
        for (int end = start ; end <= s.length() ; end++) {
            string mereWali = s.substr(start, end - start + 1);
            if (Pallindrome(mereWali) == true) {
                curr_ans.push_back(mereWali);
                solve(s, curr_ans, end + 1);
                curr_ans.pop_back(); // backtracking
            }
        }
    }

    bool Pallindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j ) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

};