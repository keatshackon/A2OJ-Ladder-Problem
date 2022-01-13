#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;

		if (a == 7 or b == 7 or c == 7) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;

}