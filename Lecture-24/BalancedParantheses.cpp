// BalancedParantheses.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;
	for (int i = 0 ; a[i] != '\0' ; i++) {
		char ch = a[i];
		switch (ch) {
		case '(':
		case '{':
		case '[':
			s.push(ch);
			break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		default:
			if (ch < 'a' || ch > 'z') {
				cout << "Break";
			}
		}
	}

	if (s.empty()) {
		return true;
	}
	return false;
}

int main() {

	char a[] = "{a+[b+c]+e*(f+d)}";
	if (isBalanced(a)) {
		cout << "Balanced" << endl;
	}
	else {
		cout << "Not Balanced" << endl;
	}
	return 0;
}

















