#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (n - 1 == k) {
			cout << -1 << "\n";
			continue;
		}
		vector<int> v;
		for (auto &q : v) {
			cin >> q;
		}
		for (int i = 1; i <= k; i++) {
			cout << i << " ";
		}
		for (int i = k + 2; i <= n; i++) {
			cout << i << " ";
		}
		if (k != n)
			cout << k + 1 << "\n";

	}
	return 0;
}