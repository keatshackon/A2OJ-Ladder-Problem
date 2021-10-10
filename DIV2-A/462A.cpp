#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t, n, a, b, c, d, q;
	cin >> t;
	while (t--) {
		vector<int>v;
		n = 3;
		while (n--) {
			cin >> q;
			v.push_back(q);
		}
		cin >> d;

		if ((v[0] + v[1] + v[2]) <= d) {
			cout << 1 << "\n";
		} else if ((v[0] + v[1] <=  d) or (v[1] + v[2] <=  d) or (v[0] + v[2] <=  d)) {
			cout << 2 << "\n";
		} else {
			cout << 3 << "\n";
		}
	}
	return 0;
}