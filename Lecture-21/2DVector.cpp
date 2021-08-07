// 2DVector.cpp
#include <iostream>
#include <vector>
#define pb push_back
using namespace std;

int main() {

	// User Input
	int n, m;
	cin >> n >> m;
	vector< vector<int> > v(n, vector<int>(m));

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0; j < m; ++j)
		{
			cin >> v[i][j];
		}
	}

	// vector < vector<int> > v(500);

	// User Input
	// int n, m;
	// cin >> n >> m;
	// for (int i = 0 ; i < n ; i++) {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		int num;
	// 		cin >> num;
	// 		v[i].pb(num);
	// 	}
	// }

	// v[0].pb(5);
	// v[0].pb(40);
	// v[0].pb(80);

	// v[1].pb(0);
	// v[1].pb(1);

	// cout << v[0].size() << endl;
	// cout << v[0].capacity() << endl;

	// cout << v[1].size() << endl;
	// cout << v[1].capacity() << endl;

	// cout << v.size() << endl;
	for (int i = 0 ; i < n ; i++) {
		// cout << i << "--> ";
		for (int j = 0; j < m; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















