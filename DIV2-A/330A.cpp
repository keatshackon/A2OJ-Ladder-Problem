#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, m, r, c;
	char q;
	cin >> r >> c;
	vector<vector<char>>v;

	for (int i = 0; i < r; i++) {
		vector<char>temp;
		for (int j = 0; j < c; j++) {
			cin >> q;
			temp.push_back(q);
		}
		v.push_back(temp);
	}
	int res1 = 0;
	int res2 = 0;

	for (int i = 0; i < r; i++) {
		int f = 1;
		for (int j = 0; j < c; j++) {
			if (v[i][j] == 'S') {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			res1++;
		}
	}

	for (int i = 0; i < c; i++) {
		int f = 1;
		for (int j = 0; j < r; j++) {
			if (v[j][i] == 'S') {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			res2++;
		}
	}
	cout << (res1 * c) + (res2 * r) - (res2 * res1 );

	return 0;

}