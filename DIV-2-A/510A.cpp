#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, k, q, m;
	cin >> n >> m;

	int f1 = 0;
	int f2 = 0;

	for (int i = 0; i < n; i++) {
		if (f1 == 0) {

			for (int j = 0; j < m; j++) {
				cout << "#";
			}
			f1 = 1;

		} else {

			if (f2 == 0) {
				for (int j = 0; j < m - 1; j++) {
					cout << ".";
				}
				cout << "#";
				f2 = 1;

			} else {
				cout << "#";
				for (int j = 0; j < m - 1; j++) {
					cout << ".";
				}
				f2 = 0;
			}
			f1 = 0;
		}
		cout << "\n";
	}
}