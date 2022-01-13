#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t, n, a, k;
	cin >> t;
	while (t--) {
		cin >> n >> k >> a;

		int res = a * 2 + n;
		if (res >= k) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}
	return 0;
}