#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;

		if (n >= k) {
			cout << (n - k) << "\n";
		} else {
			if (((k - n) % 2) == 0) {
				cout << (k - n) / 2 << "\n";
			} else {
				cout << ((k - n) / 2) + 2 << "\n";
			}
		}
	}
	return 0;

}