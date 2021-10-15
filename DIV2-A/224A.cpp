#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>v(3), sq(3);
	for (auto &x : v) {
		cin >> x;
	}

	int z = v[0] * v[1] * v[2];

	for (int i = 0; i < 3; i++) {
		sq[i] = z / (v[i] * v[i]);
	}

	for (auto &x : sq) {
		x = pow(x, 0.5);
	}

	int ans = 0;
	for (auto x : sq) {
		ans += x;
	}


	cout << ans * 4;

	return 0;

}