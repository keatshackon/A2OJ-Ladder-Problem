#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d, q, k;

	cin >> n >> k;
	vector<int>v;
	while (n--) {
		cin >> q;
		v.push_back(q);
	}
	int res = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] < v[i - 1]) {
			int temp = v[i - 1] - k - v[i];
			if (res < temp) {
				res = temp;
			}
		}
	}
	cout << res;
	return 0;
}

