#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, a, b, c;
	cin >> t;
	int ans = 0;
	while (t--) {
		cin >> a >> b >> c;
		if (a + b + c >= 2) {
			ans++;
		}
	}
	cout << ans;
	return 0;

}