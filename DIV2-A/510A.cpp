#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, a, b, c, d;
	cin >> a >> b;

	int f = 0;


	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= b; j++) {
				cout << "#";
			}
			cout << "\n";
		} else {
			if (f == 0) {
				for (int j = 1; j < b; j++) {
					cout << ".";
				}
				cout << "#\n";
				f = 1;
			} else {
				cout << "#";
				for (int j = 1; j < b; j++) {
					cout << ".";
				}
				cout << "\n";
				f = 0;
			}
		}
	}

	return 0;
}