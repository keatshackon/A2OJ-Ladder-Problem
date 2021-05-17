#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, n, k, q;
	cin >> n >> k;
	std::vector<int> v;
	while (n--) {
		cin >> q;
		v.push_back(q);
	}

	int max = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] - v[i + 1] - k > max) {
			max = v[i] - v[i + 1] - k;
		}
	}

	cout << max;
}