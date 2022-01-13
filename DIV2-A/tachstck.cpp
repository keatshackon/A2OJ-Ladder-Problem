#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (auto &q : v) {
		cin >> q;
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	int i = 1;
	while (i < v.size()) {
		if (v[i] - v[i - 1] <= k) {
			cnt++;
			i++;
		}
		i++;
	}

	cout << cnt << "\n";

	return 0;
}