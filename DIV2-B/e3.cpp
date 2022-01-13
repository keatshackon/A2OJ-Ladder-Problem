#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t, n, a;
	cin >> t;
	while (t--) {
		cin >> n >> a;

		if ((abs(n) - abs(a)) % 2 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}

