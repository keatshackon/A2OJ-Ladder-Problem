#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		ll large = INT_MIN;
		vector<int>v(n);
		for (auto &q : v) {
			cin >> q;
			if (large < q) {
				large = q;
			}
		}

		cout << "\n";
	}
	return 0;
}