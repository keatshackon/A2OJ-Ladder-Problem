#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t, n, k, q;
	cin >> t;
	while (t--) {
		cin >> n >> k >> a;
		vector<int>v;
		int f = 0;
		while (n--) {
			cin >> q;
			if (q == 1) {
				f = 1 ;
			}
			v.push_back(q);
		}
		if (f == 1) {
			cout << 0 << "\n";
		}
	}
	return 0;
}