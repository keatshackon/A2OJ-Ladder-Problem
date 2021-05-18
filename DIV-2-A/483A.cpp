#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c;
	cin >> t >> n;
	int f = 0;
	for (ll i = t; i <= n; i++) {
		for (ll j = i + 1; j <= n; j++) {
			for (ll k = j + 1; k <= n; k++) {
				if (__gcd(i, j) == 1 and __gcd(j, k) == 1 and __gcd(i, k) != 1 ) {
					f = 1;
					a = i; b = j, c = k;
					break;
				}
			}
			if (f == 1) {
				break;
			}
		}
		if (f == 1) {
			break;
		}
	}
	std::vector<ll> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());

	if (f == 0) {
		cout << -1;
	} else {
		cout << v[0] << " " << v[1] << " " << v[2];
	}

}