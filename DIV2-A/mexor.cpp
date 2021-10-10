#include<bits/stdc++.h>
using namespace std;
#define ll long  long

int main() {

	ll t, n, a, c, b, d, q;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int>v(-1, n + 1);
		int mex = -2;
		while (n--) {
			cin >> q;
			v[q] = q;
		}

		for (auto q : v) {
			if (q == -1) {
				mex = q;
			}
		}
		if (mex == -2) {
			mex = n + 1;
		}
		cout << mex << "\n";
	}
	return 0;
}