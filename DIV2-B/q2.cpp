#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		string s;
		cin >> s;
		ll cnt = 0;
		for (auto q : s) {
			if (q == '1') {
				cnt++;
			}
		}
		ll ans = 0;
		ans += (cnt * n);
		// cout << ans << "\n";
		cnt = 0;
		ll temp = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') {
				temp++;
			} else {
				if (temp > cnt) {
					cnt = temp;
				}
				temp = 0;
			}
		}
		if (temp > cnt) {
			cnt = temp;
		}
		ans += cnt * k;

		cout << ans << "\n";
	}

	return 0;
}