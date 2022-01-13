#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, a, b, c, d, e;
	cin >> t;
	while (t--) {
		vector<int>v(5);
		for (auto &q : v) {
			cin >> q;
		}
		int A = 0, B = 0, C = 0;
		for (auto q : v) {
			if (q == 1) {
				A++;
			} else if (q == 2) {
				B++;
			} else {
				C++;
			}
		}

		if (A > B) {
			cout << "INDIA\n";
		} else if (B > A) {
			cout << "ENGLAND\n";
		} else {
			cout << "DRAW\n";
		}

	}
	return 0;
}