#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	//======================   NOT SOLVED=================


	ll t, n, m;
	cin >> n;
	char q;
	vector<vector<char> > v;

	for (int i = 0; i < n; i++) {
		vector<char> temp;
		for (int j = 0; j < n; j++) {
			cin >> q;
			temp.push_back(q);
		}
		v.push_back(temp);
	}

	int cnt = 0;

	int flag = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j] == 'o') {
				if ((j - 1) > -1 and v[i][j - 1] == 'x') {
					cnt++;
				}
				if (j + 1 < v[i].size() and v[i][j + 1] == 'x') {
					cnt++;
				}
				if ((i - 1) > -1 and v[i - 1][j] == 'x') {
					cnt++;
				}
				if ((i + 1) < v.size() and v[i + 1][j] == 'x') {
					cnt++;
				}
			}
		}
		// cout << "\n" << cnt << "\n";
		if (cnt % 2 != 0) {
			flag = 0;
			break;
		}
		cnt = 0;
	}

	// cout << cnt;

	if (flag  == 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	// for (auto q : v) {
	// 	for (auto w : q) {
	// 		cout << w << " ";
	// 	}
	// 	cout << "\n";
	// }

	return 0;
}