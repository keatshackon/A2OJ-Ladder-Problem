#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, q;
	vector<int>v;
	cin >> t >> n;
	while (n--) {
		cin >> q;
		v.push_back(q);
	}
	sort(v.begin(), v.end());
	int res = INT_MAX;
	for (int i = 0; i <= v.size() - t; i++) {
		if (abs(v[i] - v[i + t - 1]) < res) {
			res = abs(v[i] - v[i + t - 1]);
		}
	}
	cout << res << "\n";

	return 0;
}