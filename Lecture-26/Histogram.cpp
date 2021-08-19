class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int ps[100005], ns[100005];
		stack<int> s;
		int n = heights.size();
		// find the next smaller building index
		for (int i = 0 ; i < n ; i++) {
			while (!s.empty() and heights[s.top()] > heights[i]) {
				ns[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}

		while (!s.empty()) {
			ns[s.top()] = n;
			s.pop();
		}

		for (int i = 0 ; i < n; i++) {
			cout << ns[i] << " ";
		}
		cout << endl;

		// find the previous smaller
		ps[0] = -1;
		s.push(0);

		for (int i = 0; i < n ; i++) {
			while (!s.empty() and heights[s.top()] >= heights[i]) {
				s.pop();
			}
			if (!s.empty()) {
				ps[i] = s.top();
			}
			else {
				ps[i] = -1;
			}

			s.push(i);
		}
		for (int i = 0 ; i < n; i++) {
			cout << ps[i] << " ";
		}
		cout << endl;
		int max_area = 0;
		for (int i = 0; i < n; i++) {
			int l = ns[i] - ps[i] - 1;
			int b = heights[i];

			int area = l * b;
			max_area = max(max_area, area);
		}

		return max_area;

	}
};