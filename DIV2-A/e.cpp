#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;

		if ((n & n - 1) == 0) {
			ll x = log2(n);
			ll y = x - 1;

			cout << ((int)pow(2, x) - (int)pow(2, y)) << "\n";
		} else {
			ll x = log2(n);
			ll y = x + 1;
			ll m = (n - (int)pow(2, x) + 1);
			ll n = (int)pow(2, x) / 2;
			cout << max(m, n) << "\n";

		}
	}
	return 0;
}