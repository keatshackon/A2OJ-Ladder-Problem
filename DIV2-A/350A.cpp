#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, k;
	cin >> t >> k;
	vector<int>a(t);
	vector<int>b(k);

	for (auto &q : a) {
		cin >> q;
	}

	for (auto &q : b) {
		cin >> q;
	}


	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int small = a[0];
	int l1 = a[a.size() - 1];
	int l2 = b[0];

	int f = 0;
	int ans = 0;
	for (int i = l1; i < l2; i++) {
		if (2 * small <= i) {
			f = 1;
			ans = i;
			break;
		}
	}
	if (f == 1) {
		cout << ans;
	} else {
		cout << -1;
	}

	return 0;

}