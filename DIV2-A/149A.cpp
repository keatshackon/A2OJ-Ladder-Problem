#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll k;
	cin >> k;

	if ( k == 0) {
		cout << 0;
		return 0;
	}
	vector<int>v(12);

	for (auto &q : v) {
		cin >> q;
	}

	sort(v.begin(), v.end(), greater<int>());
	int cnt = 0;
	int i = 0;
	for (; i < v.size(); i++) {
		int temp = k - v[i];
		if (temp > 0) {
			k = temp;
			cnt++;
		} else {
			break;
		}
	}
	if (k > 0 and i == v.size()) {
		cout << -1;
		return 0;
	}

	if (k > 0) {
		cnt++;
	}

	if (cnt == 0) {
		cout << -1;
		return 0;
	}

	cout << cnt;

	return 0;
}