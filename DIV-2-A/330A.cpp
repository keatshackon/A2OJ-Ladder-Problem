#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m;
	char q;
	cin >> n >> m;

	vector<vector<char>> v;
	int res = 0;
	for (int i = 0; i < n; i++) {
		vector<char> temp;
		int f = 1;
		for (int j = 0; j < m; j++) {
			cin >> q;
			if (q == 'S') {
				f = 0;
			}
			temp.push_back(q);
		}
		v.push_back(temp);
		if (f == 1) {
			res += m;
			for (int k = 0; k < m; k++) {
				v[i][k] = '#';
			}
		}
	}

	// cout << res << "\n";

	// for (auto q : v) {
	// 	for (auto w : q) {
	// 		cout << w << " ";
	// 	}
	// 	cout << "\n";

	// }

	for (int i = 0; i < m; i++) {
		int f = 1;
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 'S') {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			for (int k = 0; k < n; k++) {
				if (v[k][i] == '.') {
					res += 1;
				}
			}
		}
	}

	cout << res;
	return 0;
}