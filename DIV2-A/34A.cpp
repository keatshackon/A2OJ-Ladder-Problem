#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t;
	cin >> t;
	vector<int>v(t);
	for (auto &q : v) {
		cin >> q;
	}

	int ans = INT_MAX;
	int k1 = 0;
	int k2 = 0;

	for (int i = 1; i < v.size(); i++) {
		if (abs(v[i] - v[i - 1]) < ans) {
			ans = abs(v[i] - v[i - 1]);
			k1 = i + 1;
			k2 = i;
		}
	}
	if (abs(v[0] - v[v.size() - 1]) < ans) {
		k1 = 1;
		k2 = v.size();
	}

	cout << k1 << " " << k2;
	return 0;

}