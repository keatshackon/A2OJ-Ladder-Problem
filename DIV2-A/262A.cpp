#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, q;
	cin >> t >> n;
	int ans = 0;
	while (t--) {
		cin >> q;
		int temp = q;
		int cnt = 0;
		while (temp) {
			int tt = temp % 10;
			if (tt == 4 or tt == 7) {
				cnt++;
			}
			temp /= 10;
		}

		if (cnt <= n) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}