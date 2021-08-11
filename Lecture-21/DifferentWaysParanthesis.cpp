class Solution {
public: //https://leetcode.com/problems/different-ways-to-add-parentheses/
    vector<int> diffWaysToCompute(string s) {

        vector<int> ans;
        for (int i = 0 ; i < s.length(); i++) {
            char ch = s[i];
            if (isdigit(ch)) continue;
            else {
                string str_left = s.substr(0, i);
                string str_right = s.substr(i + 1);

                vector<int> left = diffWaysToCompute(str_left);
                vector<int> right = diffWaysToCompute(str_right);
                for (int i = 0 ; i < left.size() ; i++) {
                    for (int j = 0 ; j < right.size() ; j++) {
                        if (ch == '*') {
                            ans.push_back(left[i]*right[j]);
                        }
                        else if (ch == '+') {
                            ans.push_back(left[i] + right[j]);
                        }
                        else {
                            ans.push_back(left[i] - right[j]);
                        }
                    }
                }
            }
        }
        if (ans.size() == 0) {
            ans.push_back(stoi(s));
        }
        return ans;
    }
};