#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	string s;
	int ans = 0;
	while (t--) {
		cin >> s;
		if (s[1] == '+') {
			ans++;
		} else {
			ans--;
		}
	}
	cout << ans;
	return 0;

}