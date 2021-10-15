#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	ll t;
	ll a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;

		if (a > max(b, c)) {
			cout << 0 << " ";
		} else {
			int ans = max(b, c) - a + 1;
			cout << ans << " ";
		}

		if (b > max(a, c)) {
			cout << 0 << " ";
		} else {
			int ans = max(a, c) - b + 1;
			cout << ans << " ";
		}

		if (c > max(b, a)) {
			cout << 0 << " ";
		} else {
			int ans = max(b, a) - c + 1;
			cout << ans << " ";
		}
		cout << "\n";
	}

	return 0;
}