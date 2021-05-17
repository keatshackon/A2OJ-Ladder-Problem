#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m, k, q;
	cin >> t >> k;
	int temp = k - 1;
	vector<int> v;
	while (t--) {
		cin >> q;
		q += k;
		v.push_back(q);

	}

	int cnt = 0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= 5) {
			cnt++;
		}
	}
	cout << cnt / 3;

	return 0;
}