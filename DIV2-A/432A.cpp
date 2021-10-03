#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, k, q;
	cin >> t >> k;
	vector<int>v;
	while (t--) {
		cin >> q;
		v.push_back(q + k);
	}
	int cnt = 0;
	for (auto q : v) {
		if (q <= 5) {
			cnt++;
		}
	}

	cout << cnt / 3;
	return 0;

}