#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n >> k >> a;
		ll ans = 3 * k;
		ans -= ((n - k) * 1);
		if (ans >= a) {
			cout << "PASS\n";
		} else {
			cout << "FAIL\n";
		}
	}

	return 0;
}